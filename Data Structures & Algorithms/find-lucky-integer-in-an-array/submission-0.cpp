class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int>freq;
        for(int &i: arr){
            freq[i]++;
        }
        int ans =-1;
        for(auto itr: freq){
            if(itr.first == itr.second){
                ans = max(ans, itr.first);
            }

        }
        return ans;
    }
};