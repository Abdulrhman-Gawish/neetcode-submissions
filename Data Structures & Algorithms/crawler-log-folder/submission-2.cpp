class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string > st;
    for(int i = 0; i < logs.size(); i++){
        string current = logs[i];
        if(current == "../"){
            if(!st.empty()){
                st.pop();
            }
        }else if(current[0] != '.' ){
            st.push(current);
        }else{
            continue;
        }

    }
    return st.size();
    }
};