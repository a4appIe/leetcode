class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        int rev = 0;
        while(n>0){
            rev = ((long long)rev * 10) + n%10;
            n/=10;
        }
        return rev == x;
    }
};