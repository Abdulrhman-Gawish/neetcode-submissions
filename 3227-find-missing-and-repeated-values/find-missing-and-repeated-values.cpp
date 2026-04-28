class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        int repeated = 0, missing = 0;
        vector<int> freq(size + 5, 0);
        for (auto i : grid) {
            for (auto ii : i) {
                freq[ii]++;
                if (freq[ii] > 1) {
                    repeated = ii;
                }
            }
        }
        for(int i = 1; i <= size; i++){
            if(freq[i] == 0){
                missing = i;
            }
        }
        return {repeated, missing};

    }
};