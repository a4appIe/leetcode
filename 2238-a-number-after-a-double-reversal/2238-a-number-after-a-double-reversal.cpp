class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        int digit;
        while(x!=0){
            digit=x%10;
            x/=10;
            reversed = (reversed * 10) + digit;
        }
        return reversed>INT_MAX || reversed<INT_MIN ? 0 : reversed;
    }
    bool isSameAfterReversals(int num) {
        int reversed = reverse(num);
        int reversed2 = reverse(reversed);
        return reversed2 == num;
    }
};