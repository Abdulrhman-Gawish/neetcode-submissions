class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = 0, dec = 0;
        for(int i = 1;i < nums.size() ;i++){
            if(nums[i] >= nums[i-1]){
                inc++;
            }
            if(nums[i] <= nums[i-1]){
                dec++;
            }
        }
        if(inc == nums.size()-1){
            return 1;
        }
        if(dec == nums.size() - 1){
            return 1;
        }
            return 0;
        


    }
};