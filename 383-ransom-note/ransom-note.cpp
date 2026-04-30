class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> freq;
        for (char& c : magazine) {
            freq[c]++;
        }
        int ans = 0;

        for(char &c: ransomNote){
            if(freq[c]){
                freq[c]--;
            }else{
                return false;
            }
        }
        return true;
    }
};