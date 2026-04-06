class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int rep = arr[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] <= rep) {
                arr[i] = rep;

            } else {
                int temp = arr[i];
                arr[i] = rep;
                rep= temp;
            }
        }
        arr[n-1] = -1;
        return arr;
    }
};