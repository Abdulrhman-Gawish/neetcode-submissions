class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;
        for(auto &str: arr){
            freq[str]++;
        }
        vector<string> ans;
        for(auto &str: arr){
            if(freq[str] == 1){
                ans.push_back(str);
            }
        }
        if(k <= ans.size()){
            return ans[k-1];
        }
        return "";
    }
};