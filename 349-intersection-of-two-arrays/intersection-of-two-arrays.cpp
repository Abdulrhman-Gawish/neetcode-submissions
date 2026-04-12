class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool existsInNums1[1005] = {false};
        bool added[1005] = {false}; 
        vector<int> ans;

        for (int num : nums1) {
            existsInNums1[num] = true;
        }

        for (int num : nums2) {
            if (existsInNums1[num] && !added[num]) {
                ans.push_back(num);
                added[num] = true;
            }
        }

        return ans;

    }
};