class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        for(int i=prices.size()-1;i>=0;i--){
            int res=0;
            while(!st.empty()&&st.top()>prices[i]) st.pop();
            if(!st.empty()) res=st.top();
            st.push(prices[i]);
            prices[i]=(prices[i]-res);
        }
        return prices;
    }
};