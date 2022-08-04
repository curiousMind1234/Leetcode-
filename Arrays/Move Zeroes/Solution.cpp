/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

void moveZeroes(vector<int>& nums) {
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            nums[count++]=nums[i];
        }
    }
    while(count<nums.size())
        nums[count++]=0;
}
