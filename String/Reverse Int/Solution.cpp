/*

https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/

Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Input: x = 123
Output: 321

*/

int reverse(int x) {
    long long int rev=0;
    while(x!=0)
    {
        rev=(rev*10)+ x%10;
        x=x/10;
     }
    return (rev<INT_MIN || rev>INT_MAX)? 0:rev;

}
