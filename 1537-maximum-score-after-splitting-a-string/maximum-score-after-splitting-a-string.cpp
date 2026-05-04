class Solution {
public:
    int maxScore(string s) {
        int ans = -1;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            string left = s.substr(0, i);
            string right = s.substr(i, n);
            int zeroes = std::count(left.begin(), left.end(), '0');
            int ones = std::count(right.begin(), right.end(), '1');
            int sum = zeroes + ones;
            ans = max(ans, sum);
        }
        return ans;
    }
};