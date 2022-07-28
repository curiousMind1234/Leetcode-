/*
Find the duplicate element in array.

Input:
5
4 2 1 3 1
7
6 3 1 5 4 3 2

Output :
1
3
*/

#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // 1st approach
    /*map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = 1;
        }
        else{
            mp[arr[i]]++;
        }
    }
    for(auto i : mp){
        if(i.second > 1)
            return i.first;
    }
	*/
  ---------------------------------------------------
    //2nd Aprroach
    /*
     int ans = 0;
     for(int i = 0; i < arr.size(); i++) {
       ans = ans^arr[i];
       ans = ans^i;
   }
   return ans;
   */
   --------------------------------------------------
   //3rd Approach
   int sum=0;
   int n=arr.size();
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
   }
   return sum-(n*(n-1))/2;    
}
