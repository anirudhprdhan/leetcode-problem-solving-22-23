class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1,stk2;
        for(char ch:s)
        {
            if(ch=='#' && !stk1.empty())
                stk1.pop();
            else
                if(ch!='#')
                    stk1.push(ch);
        }
        for(char ch:t)
        {
            if(ch=='#' && !stk2.empty())
                stk2.pop();
            else
                if(ch!='#')
                    stk2.push(ch);
        }
        if(stk1.size()!=stk2.size())    return false;

        while(!stk1.empty() && !stk2.empty())
        {
            if(stk1.top()!=stk2.top())
            {
                cout<<stk1.top()<<stk2.top();
                return false;
            }
            stk1.pop();
            stk2.pop();
        }

            
        return true;
    }
};