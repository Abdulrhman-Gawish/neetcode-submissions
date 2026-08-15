class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, r = n;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long f = 1LL * mid * (mid + 1) / 2;

            if (f <= n) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return r;
    }
};