class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
        int count=0;
        stk.push("Main");
        for(string s : logs)
        {
            if(s=="../")
            {
                if(stk.top()!="Main")
                    stk.pop();

            }
            else if(s=="./")
            {
                continue;
            }
            else
                stk.push(s);
        }
        while(!stk.empty())
        {
            count+=1;
            stk.pop();
        }
        return count-1;
    }
};