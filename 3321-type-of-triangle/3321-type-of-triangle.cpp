class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0]+nums[1] <= nums[2] ? "none" 
        : nums[0] == nums[2] ? "equilateral" 
        : nums[0] == nums[1] || nums[1] == nums[2] ? "isosceles" 
        : "scalene";
    }
};