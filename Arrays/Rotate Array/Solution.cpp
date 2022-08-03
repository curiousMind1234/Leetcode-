/*

https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

*/

 void rotate(vector<int>& nums, int k) {
    k%= nums.size();
    reverse(nums,0,nums.size()-1);
    reverse(nums,0,k-1);
    reverse(nums,k,nums.size()-1);

}
void reverse(vector<int>& nums, int start, int end)
{
    while(start<=end)
    {
       int temp= nums[start];
       nums[start++]=nums[end];
       nums[end--]=temp;
    }
}
