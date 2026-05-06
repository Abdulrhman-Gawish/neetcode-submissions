class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& vec) {
        vector<int> waiting;
        int finish_at = 0;
        for (auto& v : vec) {
            int arrive_at = v[0];
            int prep_time = v[1];

            int start_at = max(arrive_at, finish_at);
            waiting.push_back(start_at + prep_time - arrive_at);
            finish_at = start_at + prep_time;
        }

        long long sum = 0;
        for (int& i : waiting) {
            sum += i;
        }
        cout << (double)sum / vec.size();
        return (double)sum / vec.size();
    }
};