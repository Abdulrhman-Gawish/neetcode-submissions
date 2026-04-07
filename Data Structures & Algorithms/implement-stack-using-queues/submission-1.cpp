#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {}

    void push(int x) {
        q.push(x);
    }

    int pop() {
        int n = q.size(); // 1 2 3  --> 3
                // stack         t 
        for(int i = 0; i < n -1; i++){ // 3 1 2
            int num = q.front(); // 2
            q.pop(); //  3 1
            q.push(num); //3 1 2
        }
        int num = q.front();
        q.pop(); // 3 q = 1 2 
        return num;
       
    }

    int top() {
        int n =    q.size();
        int num = 0;
        for(int i = 0; i < n ; i++){
             num = q.front();
            q.pop();
            q.push(num);
        }
        return num;      



    }

    bool empty() {
        return q.empty();

    }
};