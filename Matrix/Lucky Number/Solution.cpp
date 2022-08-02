/* https://leetcode.com/problems/lucky-numbers-in-a-matrix/

Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

Example 1:
Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.

*/

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
  
  //1st Approach 
  
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> row(m, INT_MAX);
    vector<int>col(n, INT_MIN);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            row[i] = min(row[i],matrix[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            col[i] = max(col[i],matrix[j][i]);
        } 
    }
    unordered_set<int> s;
    for(int i =0 ;i < m;i++){
        s.insert(row[i]);
    }
    for(int i = 0; i<n;i++){
       if(s.count(col[i]))
           return {col[i]};
    }
    return {};
-----------------------------------------------------------
  //2nd Approach
  
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> row(m, INT_MAX);
    vector<int>col(n, 0);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            row[i] = min(row[i],matrix[i][j]);
            col[j] = max(col[j],matrix[i][j]);
        }
    }
    vector<int> ans;
    for(auto x : row){
        if(find(col.begin(),col.end(),x)!=col.end())
            ans.push_back(x);
    }
    return ans;
}
