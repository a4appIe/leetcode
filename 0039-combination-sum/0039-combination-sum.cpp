class Solution {
public:
    void helper(vector<int>& c, int t, vector<vector<int>>& a, vector<int>& s,
                int i) {
        if(t < 0) return;
        if (i == c.size()) {
            if (t == 0) {
                a.push_back(s);
            }
            return;
        }
        if (c[i] <= t) {
            s.push_back(c[i]);
            helper(c, t - c[i], a, s, i);
            s.pop_back();
        }
        helper(c, t, a, s, i + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> a;
        vector<int> s;
        helper(c, t, a, s, 0);
        return a;
    }
};