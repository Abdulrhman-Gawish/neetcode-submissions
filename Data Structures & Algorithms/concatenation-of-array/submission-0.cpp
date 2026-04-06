class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for(int &i: nums){
            result.push_back(i);            
        }
         for(int  &i:nums){
            result.push_back(i);            
        }
        return result;

        
        
    }
};