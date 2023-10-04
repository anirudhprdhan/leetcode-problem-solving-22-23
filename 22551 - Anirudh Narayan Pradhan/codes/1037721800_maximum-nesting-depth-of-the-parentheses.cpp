class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int count=0;
        stack<char> stk;
        for(char ch : s)
        {
            if(stk.empty())
            {
                count=0;
                if(ch=='(')
                {
                    stk.push(ch);
                    count+=1;
                }
                continue;
            }
            if(ch == '(')
            {
                stk.push(ch);
                count+=1;
            }
            else if(ch==')')
            {
                if(count > max)
                    max=count;
                count-=1;
                stk.pop();
            }
        }
        return max;
    }
};