class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(27, 0);
        for (char& c : magazine) {
            freq[c - 'a']++;
        }
        int ans = 0;

        for(char &c: ransomNote){
            if(freq[c-'a']){
                freq[c-'a']--;
            }else{
                return false;
            }
        }
        return true;
    }
};