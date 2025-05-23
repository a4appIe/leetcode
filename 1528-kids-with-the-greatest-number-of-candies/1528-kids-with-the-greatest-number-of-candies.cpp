class Solution {
public:
    bool checkBool(vector<int>& arr, int element){
        bool check;
        for(int i: arr){
            if(element>=i){
                check = true;
            } else {
                check = false;
                return check;
            }
        }
        return check;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ret;
        for(int i=0; i<candies.size(); i++){
            bool check = checkBool(candies, candies[i]+extraCandies);
            ret.push_back(check);
        }
        return ret;
    }
};