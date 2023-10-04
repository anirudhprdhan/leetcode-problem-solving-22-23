class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        for(char ch:s)
        {
            if(ch=='(')
                stk.push(ch);
            else if(ch == ')')
            {
                if(!stk.empty() && stk.top() == '(')    stk.pop();
                else stk.push(ch);
            }
        }
        return stk.size();
    }
};