class Solution {
public:
    bool isSafe(int r, int c, vector<vector<char>> &b, int n){
        for(int i=0; i<c; i++){
            if(b[r][i] == 'Q') return false;
        }
        for(int i=r, j=c; i>=0 && j>=0; i--, j--){
            if(b[i][j] == 'Q') return false;
        }
        for(int i=r, j=c; i<n && j>=0; i++, j--){
            if(b[i][j] == 'Q') return false;
        }
        return true;
    }

    void h(int n, vector<vector<char>> &b, vector<vector<string>> &a, int c){
        if(c == n){
            vector<string> t;
            for(int i=0; i<n; i++){
                string r(b[i].begin(), b[i].end());
                t.push_back(r);
            }
            a.push_back(t);
            return;
        }
        for(int r = 0; r < n; r++){
            if(isSafe(r, c, b, n)){
                b[r][c] = 'Q';
                h(n, b, a, c+1);
                b[r][c] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> a;
        vector<vector<char>> b(n, vector<char>(n, '.'));
        h(n, b, a, 0);
        return a;
    }
};