class Solution {
public:
    void helper(vector<int> &n, vector<vector<int>> &a, int i){
        if(i == n.size()){
            a.push_back(n);
            return;
        }
        for(int j = i; j < n.size(); j++){
            swap(n[i], n[j]);
            helper(n, a, i + 1);
            swap(n[i], n[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& n) {
        vector<vector<int>> a;
        helper(n, a, 0);
        return a;
    }
};