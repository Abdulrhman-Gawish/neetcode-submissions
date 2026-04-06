class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>>result;
        for(auto str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(str);
        }
        for(auto it: mpp){
            result.push_back(it.second);
        }
        return result;

        
        
    }
};