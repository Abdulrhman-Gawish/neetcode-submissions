class Solution {
public:
    int pivotIndex(vector<int>& vec) {
        int n = vec.size();
        vector<int> prefix(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                prefix[i] = vec[i];
            } else {
                prefix[i] = prefix[i - 1] + vec[i];
            }
        }
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                int left_sum = 0;
                int right_sum = prefix[n - 1] - prefix[i];
                if (left_sum == right_sum) {
                    ans = i;
                    break;
                }
            } else {
                int nn = prefix[i] - vec[i];
                int mm = prefix[n - 1] - prefix[i];
                if (nn == mm) {
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};