class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> stk;
        for(char ch: s)
        {
            if(ch == '(')
            {
                if(!stk.empty())    ans.push_back(ch);
                stk.push(ch);
            }
            else
            {
                stk.pop();
                if(!stk.empty())    ans.push_back(ch);
            }
        }
        return ans;
    }
};