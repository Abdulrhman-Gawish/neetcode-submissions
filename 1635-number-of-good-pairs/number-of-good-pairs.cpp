class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            for (int k = i + 1; k < n; ++k) {
                if (nums[i] == nums[k]){
                    ans++;
                }
            }
        }
        return ans;
    }
};