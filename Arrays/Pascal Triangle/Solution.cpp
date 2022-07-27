/*
https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_1089580?leftPanelTab=0

Given a interger n task is to return a 2D Array containing pascal triangle till row n
Input:
3
1
2
3
Sample Output :
1
1 
1 1 
1 
1 1 
1 2 1 
Explanation Of The Sample Input 1:
For the first test case:
The given integer N = 1 you have to print the triangle till row 1 so you just have to output 1.

For the second test case:
The given integer N = 2 you have to print the triangle till row 2 so you have to output 
1
1 1

For the third test case
The given integer N = 3 you have to print the triangle till row 3 so you have to output 
1
1 1
1 2 1
*/

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> res(n);
    for(int i=0; i<n;i++){
        res[i].resize(i+1);
        res[i][0] = 1;
        res[i][i] = 1;
        for(int j =1 ;j <i;j++){
            res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
    }
    return res;
}
