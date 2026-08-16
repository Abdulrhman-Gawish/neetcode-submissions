class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if ((mid == 0 || nums[mid] != nums[mid - 1]) &&
                (mid == nums.size() - 1 || nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }

            int pairStart;

            if (mid > 0 && nums[mid] == nums[mid - 1]) {
                pairStart = mid - 1;
            } else {
                pairStart = mid;
            }

            int elementsAfterPair = nums.size() - (pairStart + 2);

            if (elementsAfterPair % 2 == 1) {
                l = pairStart + 2;
            } else {
                r = pairStart - 1;
            }
        }

        return -1;
    }
};