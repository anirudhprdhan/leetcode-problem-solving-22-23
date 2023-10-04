class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        bool flag;
        for(char ch:s)
        {
            flag=false;
            if(stk.empty())
            {
                stk.push(ch);
                continue;
            }
            if(tolower(stk.top()) == tolower(ch) )
            {
                if(isupper(stk.top()) && islower(ch))
                    flag=true;
                else if(isupper(ch)&&islower(stk.top()))
                    flag=true;
            }
            if(!flag)
                stk.push(ch);
            else
                stk.pop();

        }
        string ans="";
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};