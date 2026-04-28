class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]);
            int idx = num - 1;
            if (nums[idx] > 0) {
                nums[idx] = -1 * nums[idx];
            }
        }
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};