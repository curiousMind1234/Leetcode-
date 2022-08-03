/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]

*/

int removeDuplicates(vector<int>& nums) {
  //1st Approach
  
   int count = 0;

  for(int i = 1; i < nums.size(); i++){
      if(nums[i] == nums[i-1]) count++;
      else nums[i - count] = nums[i];
  }
    return nums.size()-count; 
  -------------------------------------------
  
  //2nd Approach
    
    if(nums.size()==0)return 0;
    int count =0 ;
    int i=0,j=0;
    while(j<nums.size()){
        if(nums[i]!=nums[j]){
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i+1;
}
