class Solution {
public:
    int maxProfit(vector<int>& vec) {
        int min_price = 100000;
        int max_price = -1;
        int ans = 0;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] < min_price) {
                min_price = vec[i];
            }
            int profit = vec[i] - min_price;
            ans = max(ans, profit);
        }
        return ans;
    }
};