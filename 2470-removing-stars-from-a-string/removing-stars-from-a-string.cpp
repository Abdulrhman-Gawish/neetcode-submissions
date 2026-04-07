class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        for (char c : s) {
            if (c == '*') {
                int n = ans.size();
                ans.erase(ans.begin() + n - 1);
            } else {
                ans += c;
            }
        }
        return ans;
    }
};