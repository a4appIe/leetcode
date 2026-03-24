class Solution {
public:
    void helper(int i, vector <int> &n, vector<vector<int>> &a, vector<int> &d){
        a.push_back(d);
        for (int j = i; j < n.size(); j++) {
            d.push_back(n[j]);
            helper(j + 1, n, a, d);
            d.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& n) {
        vector<vector<int>> a;
        vector<int> d;
        helper(0, n, a, d);
        return a;
    }
};