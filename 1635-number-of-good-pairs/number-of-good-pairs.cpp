class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        for (const auto& i : freq) {
            ans += i.second * (i.second - 1) / 2;
        }
        return ans;
    }
};