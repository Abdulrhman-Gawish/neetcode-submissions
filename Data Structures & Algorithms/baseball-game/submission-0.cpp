class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
    int sum = 0;
    for(int i = 0; i < operations.size(); i++){
        if(operations[i] == "+"){
            int first = st.top();
            st.pop();
            int second = st.top();
            int num = first + second;
            st.push(first);
            st.push(num);
        }
        else if(operations[i] == "D"){
            int first = st.top();
            st.push(first * 2);
        }else if(operations[i] == "C"){
            st.pop();

        }
        else{
            int num = stoi(operations[i]);
            st.push(num);
        }
    }
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
        return sum;
    }
};