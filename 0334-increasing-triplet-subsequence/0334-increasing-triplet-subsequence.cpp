class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = INT_MAX;
        int m = INT_MAX;
        for(int i: nums){
            if(i<=n){
                n=i;
            }else if(i<=m){
                m=i;
            }else{
                return true;
            }
        }
        return false;
    }
};