class Solution {
public:
    int maxProfit(vector<int>& vec) {
        int minn = 1e5 + 5;
        int maxx = -1;
        int ans = 0;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] < minn) {
                minn = vec[i];
            } else {
                int profit = vec[i] - minn;
                ans = max(ans, profit);
            }
        }
        return ans;
    }
};