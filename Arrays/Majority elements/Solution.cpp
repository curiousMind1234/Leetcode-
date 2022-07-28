/*
https://www.codingninjas.com/codestudio/problems/majority-element_842495?leftPanelTab=0

You have been given a array of size n you need to find out the majority element by considering the fact if count of element must be greater than n/2

Input :
5
2 3 9 2 2
4
8 5 1 9 

Output :
2
-1 
*/

#include <bits/stdc++.h> 

int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map <int,int>mp;
    for(int i=0 ; i < n ;i++){
        if(mp.find(arr[i])== mp.end()){
            mp[arr[i]]=1;
        }
        else{
            mp[arr[i]]++;
        }
    }
    for(auto i : mp){
        if(i.second > n/2)
            return i.first;
    }
    return -1;  
}
