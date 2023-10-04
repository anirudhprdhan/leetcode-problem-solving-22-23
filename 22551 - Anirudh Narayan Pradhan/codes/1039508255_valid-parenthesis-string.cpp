class Solution {
public:
    bool checkValidString(string s) {
        int l=s.length();
        if(l==0)    return true;
        stack<char> stk;
        stack<char> star;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(')   stk.push(i);
            if(s[i]=='*')   star.push(i);
            if(s[i]==')')
            {
                if(!stk.empty())    stk.pop();
                else
                {
                    if(!star.empty())   star.pop();
                    else    return false;
                }
            }
        }
        while(!stk.empty() && !star.empty() && stk.top()<star.top())
        {
            stk.pop();
            star.pop();
        }
        if(stk.empty()) return true;
        return false;
        
    }
};