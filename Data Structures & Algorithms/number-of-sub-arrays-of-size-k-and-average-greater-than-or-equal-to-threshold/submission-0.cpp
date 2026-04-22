class Solution {
   private:
    vector<int> nums;
    int sum = 0;
    void add(int idx) { sum += nums[idx]; }
    void remove(int idx) { sum -= nums[idx]; }

    int get_sum() { return sum; }

   public:
    int numOfSubarrays(vector<int>& vec, int k, int threshold) {
        nums = vec;
        for (int i = 0; i < k - 1; i++) {
            sum += vec[i];
        }
        int cnt = 0;
        for (int r = k - 1, l = 0; r < nums.size(); l++, r++) {
            add(r);
            int summ = get_sum();
            if (summ / k >= threshold) {
                cnt++;
            }
            remove(l);
        }
        return cnt;
    }
};