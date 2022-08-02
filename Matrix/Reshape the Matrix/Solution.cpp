/*
https://leetcode.com/problems/reshape-the-matrix/
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.
You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.
The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]

*/

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int row = mat.size();
    int col = mat[0].size();
    int count=0;
    vector<int>temp;
    vector<vector<int>> res(r,vector<int>(c));
    for(int i = 0; i<row; i++){
        for(int j=0; j<col; j++){
            temp.push_back(mat[i][j]);
        }
    }
    if(r*c > row*col || r*c < row*col){
        return mat;
    }
    for(int i = 0; i<r;i++){
        for(int j=0;j <c;j++){
            res[i][j] = temp[count++];
        }
    }
    return res;
}
