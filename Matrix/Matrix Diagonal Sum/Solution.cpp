/*
https://leetcode.com/problems/matrix-diagonal-sum/

Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
*/

int diagonalSum(vector<vector<int>>& mat) {
   //1st approach  
    int sum=0;
    int c = mat.size();
    for(int i =0;i<c;i++){
        sum += mat[i][i] + mat[i][c-i-1];
    }
    int n = mat.size()-1;
    if(n%2 == 0){
        sum -= mat[n/2][n/2];
    } 
    return sum;
  -----------------------------------------------------

    //2nd Approach 
    int s =0;
    for(int i =0;i<mat.size();i++){
        for(int j =0;j<mat[0].size();j++){
            if(i==j or i+j == mat.size()-1){
                s+=mat[i][j];
            }
        }
    }
    return s;
}
