class Solution {
public:
    bool isValid(vector<int> pos, int curPos, int m){
        int ballCnt = 1, lastPos = pos[0];
        for(int i: pos){
            if(i-lastPos >= curPos){
                ballCnt++;
                lastPos = i;
            }
            if(ballCnt >= m){
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 1, high = position[position.size() - 1] - position[0];
        int ans = 0;
        while(low <= high){
            int mid = (low + high)/2;
            if(isValid(position, mid, m)){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};