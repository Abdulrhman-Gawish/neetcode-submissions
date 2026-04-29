class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> strs;
        string str;
        
        for (char c : s) {
            if (c == ' ') {
                strs.push_back(str);
                str = "";
            } else {
                str += c;
            }
        }
        strs.push_back(str);
        
        if (pattern.size() != strs.size()) {
            return false;
        }
        
        map<char, string> mapc;  
        map<string, char> mapw;  
        
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string word = strs[i];
            
            if (mapc.find(c) == mapc.end() && mapw.find(word) == mapw.end()) {
                mapc[c] = word;
                mapw[word] = c;
            } 
            else {
                if (mapc[c] != word || mapw[word] != c) {
                    return false;
                }
            }
        }
        
        return true;
    }
};