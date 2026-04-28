class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        int result = -1e9 + 10;
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > n / 2){
                result = nums[i];
            }
        }
        return result;
        
        
    }
};