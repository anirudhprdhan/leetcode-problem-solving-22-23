class CustomStack {
public:
    stack<int> stk;
    stack<int> tmp;
    int maxx;


    CustomStack(int maxSize) {
        maxx = maxSize;
    }
    
    void push(int x) {
        if(stk.size()>=maxx)    return;
        stk.push(x);
    }
    
    int pop() {
        if(!stk.empty())
        {
            int i=stk.top();
            stk.pop();
            return i;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        while(!stk.empty())
        {
            tmp.push(stk.top());
            stk.pop();
        }
        
        while(!tmp.empty())
        {
            if(!tmp.empty() && k)
            {
                stk.push(val+tmp.top());
                tmp.pop();
                --k;
            }
            else
            {
                stk.push(tmp.top());
                tmp.pop();
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */