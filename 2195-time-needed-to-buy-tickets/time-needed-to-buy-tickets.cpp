class Solution {
public:
    int timeRequiredToBuy(vector<int>& vec, int k) {
        int time = 0;
        queue<pair<int, int>>q;
        for(int i = 0; i < vec.size(); i++){
            q.push({vec[i], i});
        }
        while(!q.empty()){
            int n = q.front().first;
            int idx = q.front().second;
            q.pop();
            time++;
            n--;
            if(idx == k and n == 0){
                return time;

            }
            if(n > 0){
                q.push({n, idx});

            }
        }
        return time;
    }
};