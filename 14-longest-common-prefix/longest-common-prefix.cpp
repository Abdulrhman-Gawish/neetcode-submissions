class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLength = 2102150;
        for (int i = 0; i < strs.size(); i++) {
            int size = strs[i].size();
            minLength = min(minLength, size);
        }
        string finalResult = ""; 
        for (int i = 0; i < minLength; i++) {
            int currentChar = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(currentChar != strs[j][i]){
                    return finalResult;
                }
            }
            finalResult+=currentChar;
        }
        return finalResult;
    }
};