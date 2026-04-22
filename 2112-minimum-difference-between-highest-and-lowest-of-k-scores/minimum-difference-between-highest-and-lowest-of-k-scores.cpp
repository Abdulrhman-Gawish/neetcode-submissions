class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 10000002;
        int i = 0, j = k - 1;
        while (j < nums.size()) {
            ans = min(ans, abs(nums[i] - nums[j]));
            i++, j++;
        }
        return ans;
    }
};