class Solution {
public:
    string makeGood(string str) {
        if(str.size() == 1){
        return str;
    }
    stack<char> st;
    for(char c: str){
        if(st.empty()){
            st.push(c);
        }else{
            char top = st.top();
            if(abs(top - c) == 32){
                st.pop();
            }else{
                st.push(c);
            }

        }
    }
    string ans ="";
    if(st.empty()){
        return "";
    }else{
        while (!st.empty()){
            ans+=st.top();
            st.pop();
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};