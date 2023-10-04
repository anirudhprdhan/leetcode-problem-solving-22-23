class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        int ans=0;
        int i,j;
        for(string s:operations)
        {
            if(s=="+")
            {
                i=stk.top();
                stk.pop();
                j=stk.top();
                stk.push(i);
                stk.push(i+j);
            }
            else if(s=="D")
            {
                stk.push(2*stk.top());
            }
            else if(s=="C")
                stk.pop();
            else
                stk.push(stoi(s));
        }
        while(!stk.empty())
            {ans+=stk.top();
            stk.pop();}
        return ans;
    }
};