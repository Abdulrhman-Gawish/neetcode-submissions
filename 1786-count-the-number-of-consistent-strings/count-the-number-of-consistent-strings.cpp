class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> freq;
        for (char& c : allowed) {
            freq[c]++;
        }
        int ans = 0;
        for (string& str : words) {
            int n = 0;
            for (char& c : str) {
                if (freq[c]) {
                    n++;
                }
            }
            if (n == str.size()) {
                ans++;
            }
        }
        return ans;
    }
};