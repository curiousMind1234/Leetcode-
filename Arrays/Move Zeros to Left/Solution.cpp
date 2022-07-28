/*
Input: 
1 2 0 0 1

Output :
0 0 1 2 1
*/

void moveZerosToLeft(int *arr, int n) 
{
    int i = n-1;
    for(int j = n-1 ; j>=0 ;j--){
        if(arr[j]!=0){
            swap(arr[j], arr[i]);
            i--;
        }
    }
    
}
