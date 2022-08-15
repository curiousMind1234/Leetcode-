/*
https://leetcode.com/problems/sqrtx/

Example 1:
Input: x = 4
Output: 2

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.

With precision:
Input: x = 8, precision value is 3 so it will give o/p till 2.823
Output: 2.823
*/


//sqrt of integer skip precision value

long long binarySearch(int n){
    int s = 0;
    int e = n;
    long long mid = s + (e-s)/2;
    long long ans= 0;

    while(s<=e){
        long long square = mid*mid;

        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
// for precision value
double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int mySqrt(int x) {
    return binarySearch(x);
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = mySqrt(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}

