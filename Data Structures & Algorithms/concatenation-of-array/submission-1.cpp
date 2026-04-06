class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vec;
        for(int &i: nums){
            vec.push_back(i);
        } 
        for(int &i: nums){
            vec.push_back(i);
        }        
        return vec;       

        
        
    }
};