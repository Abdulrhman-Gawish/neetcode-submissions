class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size()/2;
        map<int, int> freq;
        for(int &i: nums)
            freq[i]++;

            for(auto itr: freq){
                if(itr.second % 2 != 0){
                    return false;
                }
            }

            return true;
    }
};