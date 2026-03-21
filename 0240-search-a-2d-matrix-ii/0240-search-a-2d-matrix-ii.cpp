class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int t) {
        int m = mt.size();
        int n = mt[0].size();
        int row = 0;
        int col = n - 1;
        while(row < m && col >= 0){
            int val = mt[row][col];

            if(val == t){
                return true;
            } else if(val > t){
                col--;
            } else {
                row++;
            }
        }
        return false;
    }
};