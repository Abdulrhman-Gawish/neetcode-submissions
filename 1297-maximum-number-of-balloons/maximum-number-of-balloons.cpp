class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // first get freq for important chars;
        map<char, int> freq;
        for (char& c : text) {
            if (c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n')
                freq[c]++;
        }
        // check exsit or not
        vector<char> vec = {'b', 'a', 'l', 'o', 'n'};
        for (char c : vec) {
            if (freq[c] == 0) {
                return 0;
            }
        }

        int ans = INT_MAX;
        for (auto itr : freq) {
            if (itr.first == 'o' || itr.first == 'l')
                ans = min(ans, itr.second / 2);
            else
                ans = min(ans, itr.second);
        }
        return ans;
    }
};