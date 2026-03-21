class Solution {
public:
    void helper(vector<string> &ans, string res, int n, int o, int c){
        if(res.length() == 2*n){
            ans.push_back(res);
            return;
        }
        if(o<n){
            helper(ans, res+'(', n, o+1, c);
        }
        if(c<o){
            helper(ans, res+')', n, o, c+1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans = {};
        string res = "";
        helper(ans, res, n, 0, 0);
        return ans;
    }
};