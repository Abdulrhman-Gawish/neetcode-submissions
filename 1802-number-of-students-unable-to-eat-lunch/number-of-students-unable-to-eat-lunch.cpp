class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int &i: students){
            q.push(i);
        }
        
        stack<int> s;
        for(int i = sandwiches.size()-1; i >= 0; i--){
            s.push(sandwiches[i]);
        }

        int cant = 0; 
        
        while(!q.empty() && !s.empty()){
            if(s.top() == q.front()){
                s.pop();
                q.pop();
                cant = 0; 
            }
            else {
                int temp = q.front();
                q.pop();
                q.push(temp);
                cant++;
                
                if(cant == q.size()){
                    return q.size();
                }
            }
        }
        return 0;
    }
};