class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        map<char, pair<int, int>> freq;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            freq[c].first++;
            freq[c].second = i;
        }
        int ans = 1e6;
        for (auto& itr : freq) {
            if (itr.second.first == 1) {
                ans = min(ans, itr.second.second);
            }
        }
        return (ans == 1e6) ? -1 : ans;
    }
};