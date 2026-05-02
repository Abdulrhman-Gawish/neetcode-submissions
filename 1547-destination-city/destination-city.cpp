class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, bool> visited;
        for (auto itr : paths) {
            for (string str : itr) {
                visited[str] = 1;
                break;
            }
        }
        for (auto itr : paths) {
            for (string str : itr) {
                if (!visited[str]) {
                    cout << str;
                    return str;
                }
            }
        }
        return "";
    }
};