/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

void reverseString(vector<char>& s) {
    int a= s.size();

    int low =0 ,high= a-1;
    while(low<high)
    {
        char temp = s[low];
        s[low] =s[high];
        s[high] = temp;
        low++;
        high--;         
    }     
}
