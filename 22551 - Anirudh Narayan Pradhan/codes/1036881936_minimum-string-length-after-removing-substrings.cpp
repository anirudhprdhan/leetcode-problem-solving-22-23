class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        int count=0;
        stk.push(s[count]);
        count=1;

        for(;count<s.length();++count)
        {  
            if(stk.empty())
            {
                stk.push(s[count]);
                continue;
            }
            if(s[count] == 'B' && stk.top() == 'A')
            {
                stk.pop();
                continue;
            }
            if(s[count] == 'D' && stk.top() == 'C')
            {
                stk.pop();
                continue;
            }
            stk.push(s[count]);  
        }
        count=0;
        while(!stk.empty())
        {
            stk.pop();
            count+=1;
        }
        return count;
    }
};