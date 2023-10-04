class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        string ans="";
        for(char ch : s)
        {
            if(ch == '*')
            {
                if(!stk.empty())
                    stk.pop();
            }
            else 
                stk.push(ch);
        }
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};