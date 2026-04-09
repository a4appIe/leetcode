class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int> hash(100001, 0);
        int result;
        int moreThan25Percent = arr.size()/4;
        for(int i=0; i<arr.size(); i++){
            hash[arr[i]]++;
        }
        for(int i=0; i<hash.size(); i++){
            if(hash[i] > moreThan25Percent){
                result = i;
            }
        }
        return result;
    }
};