class Solution {
public:
    void helper(string d, vector<string> &a, string &o, int i, string m[]){
        if(i == d.length()){
            a.push_back(o);
            return;
        }
        int n = d[i] - '0';
        string v = m[n];
        for(int j = 0; j < v.length(); j++){
            o.push_back(v[j]);
            helper(d,a,o,i+1,m);
            o.pop_back();
        }
    }

    vector<string> letterCombinations(string d) {
        string m[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string o;
        vector<string> a;
        int i = 0;
        helper(d, a, o, i, m);
        return a;
    }
};