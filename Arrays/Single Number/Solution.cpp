/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]
Output: 1
*/

int occursOnce(vector<int> &a, int n){
	// Write your code here.
   int x =0;
    for(int i=0; i<n ;i++){
        x = x ^ a[i];
    }
    return x;
}
