/* 
https://leetcode.com/problems/richest-customer-wealth/ 
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
*/

int maximumWealth(vector<vector<int>>& arr) {
  //Brute Force Approach 
    /*int r = arr.size();
    int c = arr[0].size();
    vector<int> res(r);
    for(int i=0; i<r; i++){
        for(int j =0; j<c ;j++){
            res[i]+=arr[i][j];
        }
    }
    sort(res.begin(),res.end(),greater<int>());
    return res[0];*/
  ------------------------------------------------
   // Optimial Approach
    
    int max = 0;
    for (int i = 0; i < (int)arr.size(); i++){
        int sum = 0;
        for (int j = 0; j < (int)arr.at(i).size(); j++){ 
            sum += arr[i][j];
        }
        max < sum ? max = sum: max = max;
    }
    return max;
}
