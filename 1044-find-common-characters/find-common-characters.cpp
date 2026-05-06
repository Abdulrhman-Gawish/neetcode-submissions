class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> minfreq(26, INT_MAX);
        for(int i = 0; i < words.size(); i++){
            vector<int> freq(26, 0);
            for(char &c: words[i]){
                freq[c- 'a']++;
            }
            for(int j = 0; j < 26; j++){
                minfreq[j] = min(minfreq[j], freq[j]);
            }

        }

        for(int i = 0 ;i < 26; i++){
            while(minfreq[i]){
            string str = "";
                char c = i + 'a';
                str+= c;
                ans.push_back(str);
                minfreq[i]--;
            }
        }
        return ans;
    }
};