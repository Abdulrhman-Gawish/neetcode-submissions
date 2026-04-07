class Solution {
public:
    int evalRPN(vector<string> &tokens) {
    stack<int> st;

    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i] != "/" && tokens[i] != "*" &&
            tokens[i] != "-" && tokens[i] != "+") {

            st.push(stoi(tokens[i]));
        } else {
            int f = st.top(); st.pop();
            int s = st.top(); st.pop();

            if (tokens[i] == "+") {
                st.push(s + f);
            } else if (tokens[i] == "-") {
                st.push(s - f);
            } else if (tokens[i] == "*") {
                st.push(s * f);
            } else {
                st.push(s / f);
            }
        }
    }
    return st.top();
}
};
