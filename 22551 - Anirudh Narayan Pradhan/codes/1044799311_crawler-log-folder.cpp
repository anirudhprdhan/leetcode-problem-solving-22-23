class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
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
        return stk.size()-1;
    }
};