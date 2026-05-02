class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int size = v.size();
        for (int i = 0; i < size; i++) {
            if (v[i] == 0) {
                bool l = (i == 0) || (v[i - 1] == 0) ;
                bool r = (i == size - 1) || (v[i + 1] == 0);
              
                if (l and r) {
                    v[i] = 1;
                    n--;
                    if(n==0){
                        return 1;
                    }
                }
            }
            
        }
        return n <= 0;
    }
};