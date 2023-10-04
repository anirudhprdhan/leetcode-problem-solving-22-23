class MyQueue {
public:
    stack<int> instk;
    stack<int> outstk;
    MyQueue() {
        
    }
    
    void push(int x) {
        instk.push(x);
    }
    
    int pop() {
        while(!instk.empty())
        {
            outstk.push(instk.top());
            instk.pop();
        }
        int tmp=outstk.top();
        outstk.pop();
        while(!outstk.empty())
        {
            instk.push(outstk.top());
            outstk.pop();
        }
        return tmp;
    }
    
    int peek() {
        while(!instk.empty())
        {
            outstk.push(instk.top());
            instk.pop();
        }
        int tmp=outstk.top();
        while(!outstk.empty())
        {
            instk.push(outstk.top());
            outstk.pop();
        }
        return tmp;
    }
    
    bool empty() {
        return instk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */