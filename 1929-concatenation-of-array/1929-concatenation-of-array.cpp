class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = 2*nums.size();
        int n = nums.size();
        vector<int> res(len, 0);
        for(int i=0; i<nums.size(); i++){
            res[i] = nums[i];
            res[i+n] = nums[i];
        }
        return res;
    }
};