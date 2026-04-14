class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = k;
        int i = num.size() - 1;
        vector<int> ans;
        while (i >= 0 or carry > 0){
            if(i >= 0){
                carry += num[i];
                i--;
            }

            ans.push_back(carry % 10);
            carry /= 10;

        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};