class MinStack {
public:
    stack<pair<int,int>> stk;
    int minn;
    MinStack() {
        int val;
    }
    
    void push(int val) {
        if(stk.empty() || val<minn)
        {
            stk.push({val,val});
            minn=val;
            return;
        }
        stk.push({val,minn});
    }
    
    void pop() {
        stk.pop();
        if(!stk.empty())
            minn=stk.top().second;
    }
    
    int top() {
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */