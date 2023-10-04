class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> stk;
        vector<string> ans;
        int i=1,j=0;

        while(i<=n && j<target.size())
        {
            stk.push(i++);
            ans.push_back("Push");
            if(target[j]==stk.top())
                ++j;
            else
            {
                stk.pop();
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};