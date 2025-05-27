class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ret(n, 1);
        int prev = 1;
        for (int i = 0; i < n; ++i) {
            ret[i] = prev;
            prev *= nums[i];
        }
        int next = 1;
        for (int i = n - 1; i >= 0; --i) {
            ret[i] *= next;
            next *= nums[i];
        }
        return ret;
    }
};