class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    int t;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        t=x;
    }
    
    int pop() {
        while(!q1.empty())
        {
            t=q1.front();
            q1.pop();
            if(!q1.empty())
                q2.push(t);
        }
        swap(q1,q2);
        return t;
    }
    
    int top() {
        while(!q1.empty())
        {
            t=q1.front();
            q1.pop();
            q2.push(t);
        }
        swap(q1,q2);
        return t;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */