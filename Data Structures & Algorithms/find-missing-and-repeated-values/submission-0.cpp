class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeated = 0, missing = 0;
        map<int, int> freq;
        int n = pow(grid.size(), 2);
        int sum = n * (n + 1) / 2;
        for (auto i : grid) {
            for (auto ii : i) {
                freq[ii]++;
            }
        }
        for (auto& itr : freq) {
            if (itr.second > 1) {
                repeated = itr.first;
                sum -= itr.first;
            } else {
                sum -= itr.first;
            }
        }
        return {repeated, sum};
    }
};