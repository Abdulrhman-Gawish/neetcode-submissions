class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            int original = prices[i];

            while (!st.empty() && st.top() > original) {
                st.pop();
            }

            if (!st.empty()) {
                prices[i] = original - st.top();
            }

            st.push(original);
        }

        return prices;
    }
};