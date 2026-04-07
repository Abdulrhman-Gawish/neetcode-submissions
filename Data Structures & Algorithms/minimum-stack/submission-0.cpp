class MinStack {
public:

    vector<long long> vec;

    MinStack() {

    }

    void push(long long val) {
        vec.push_back(val);

    }

    void pop() {
        int n = vec.size();
        vec.erase(vec.begin() + n - 1);
    }

    int top() {
        int n = vec.size();
        return vec[n - 1];
    }

    int getMin() {
        auto idx = min_element(vec.begin() , vec.end());
        return *idx;
    }
};