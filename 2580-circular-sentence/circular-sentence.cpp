class Solution {
public:
    bool isCircularSentence(string str) {
        vector<string> vec;
        string word = "";
        for (char& c : str) {
            // c = tolower(c);
            if (c == ' ') {
                vec.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        vec.push_back(word);
        for (string& s : vec)
            cout << s << " ";

        cout << "\n ====================== \n";
        int n = vec.size();
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (vec[0][0] != vec[n - 1].back()) {
                    cout << "NO 1" << "\n";
                    return 0;
                }
            } else {
                if (vec[i][0] != vec[i - 1].back()) {
                    cout << "NO 2" << endl;
                    return 0;
                }
            }
        }
        cout << "YES";
        return 1;
    }
};