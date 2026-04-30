class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
             prefix[i + 1] = prefix[i]; 
            char first = words[i][0];
            char second = words[i].back();
            if (vowels.count(first) and vowels.count(second)) {
                prefix[i + 1]++;
            }
        }
        vector<int> ans;
        for (const auto& q : queries) {

            int f = q[0];
            int s = q[1];
            int res = prefix[s+1] - prefix[f];
            ans.push_back(res);
        }
        return ans;
    }
};
