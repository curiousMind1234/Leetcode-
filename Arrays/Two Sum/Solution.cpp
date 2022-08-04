/*

https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

vector<int> twoSum(vector<int>& nums, int target) {
   map<int, int> mp;
   for( int i=0; i<nums.size();i++)
   {
      if(mp.count(target-nums[i])>0)
          return {mp[target-nums[i]],i};

       mp.insert(make_pair(nums[i],i));
   }
    return {-1,-1};
}
