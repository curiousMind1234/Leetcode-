/*
https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

Given a rotated sorted array you need to find the position of given key in that array.

Approach:
given array is  7 9 1 2 3 and key is 1.

7 9 is in monotonic 1st line
1 2 3 is in monotonic 2nd line

so first we find pivot element and depending on that we try to apply binary search on elements.

*/

int getPivot(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int BinarySearch(vector<int>& arr, int start,int end,int key){
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr,n);
    if(k >= arr[pivot]  && k <= arr[n-1]){
      //BS on second line
        return BinarySearch(arr,pivot,n-1,k);
    }
    else{
      //BS on first line
        return BinarySearch(arr,0,pivot-1,k);
    }
    return -1;
}





