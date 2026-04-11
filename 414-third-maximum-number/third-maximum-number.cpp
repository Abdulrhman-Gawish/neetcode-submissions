class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(int &i: nums){
            st.insert(i);
        }
        if(st.size() < 3) {
            return *st.rbegin();
        }
        
        auto it = st.rbegin();
        advance(it, 2); 
        return *it;
        
    }
};