class Solution {
   private:
    

   public:
    int numOfSubarrays(vector<int>& vec, int k, int threshold) {
        int n = vec.size();
        int sum = 0;
        for(int i = 0; i < k - 1; i++){
            sum += vec[i];

        }
        int ans = 0;

        for(int l = 0, r = k - 1; r < n; ++l, ++r){
            sum += vec[r];
            if(sum / k >= threshold){
                ans++;
            }
            sum -= vec[l];

        }
        return ans;
    }
};