class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> count;
        for(int i: nums){
            count[i]++;
        }
        for(auto i: count){
            if(i.second > 1) return true;
        }
        return false;
    }
};