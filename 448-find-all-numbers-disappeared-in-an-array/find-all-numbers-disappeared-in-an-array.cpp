class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int element = nums[i];
            int idx = nums[i] - 1;

            if (element != nums[idx]) {
                swap(nums[idx], nums[i]);
                i--;
            }
        }

        for (int i = 0; i < nums.size(); i++) {

            if(nums[i] != i + 1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};