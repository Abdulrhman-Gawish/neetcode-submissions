class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector<string> res;
        int n = blocks.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (j - i + 1 == k) {
                    res.push_back(blocks.substr(i, k));
                }
            }
        }
        int ans = 1343423423, cnt = 0;
        for (auto str : res) {
            for (char c : str) {
                if (c == 'W') {
                    cnt++;
                }
            }
            ans = min(ans, cnt);
            cnt = 0;
        }
        return ans;

    }
};