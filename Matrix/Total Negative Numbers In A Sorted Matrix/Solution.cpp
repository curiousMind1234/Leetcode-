/*
Given a matrix sorted in decreasing order both row-wise and column-wise, find the count of negative numbers present in the matrix.

Input : 
2 -1
1 -2

Output :
2
*/


#include<bits/stdc++.h>
int countNegativeNumbers(vector<vector<int>> &mat)
{
  //Naive Approach o(r+c)
   int row = mat.size(), col = mat[0].size();
    int s = 0, e = col - 1, neg = 0;
    while(s < row && e < col){
        int ele = mat[s][e];
        if(mat[s][e] < 0){
            neg += row - s;
            e--;
        }
        else 
            s++;           
    }
    return neg;
----------------------------------------------------------------------  
  
  //Optimal Approach using upper bound stl; o(r*C) r is row and c is coloumn
    int total = 0;
    for(int i = 0 ; i < mat.size() ; i++){
        int l = upper_bound(mat[i].rbegin(),mat[i].rend(), -1) -
            mat[i].rbegin();
        total+=l;
    }
    
    return total;    
}
