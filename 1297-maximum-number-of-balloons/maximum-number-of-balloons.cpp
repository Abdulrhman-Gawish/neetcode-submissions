class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> freq;
        for (char& c : text) {
            if (c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n') {
                freq[c]++;
            }
        }
        string required = "balloon";
        for (char c : required) {
            if (freq[c] == 0)
                return 0;
        }

        int ans = INT_MAX;
        for (auto itr : freq) {
            if (itr.first == 'o' || itr.first == 'l') {
                ans = min(ans, itr.second / 2);
            } else {
                ans = min(ans, itr.second);
            }
        }
        return ans;
    }
};