class Solution {
public:
    int mySqrt(int x) {
        int l = 1, r = x;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            long long square = 1LL * mid * mid;

            if (square == x) {
                return mid;
            } 
            else if (square > x) {
                r = mid - 1;
            } 
            else {
                l = mid + 1;
            }
        }

        return r;
    }
};