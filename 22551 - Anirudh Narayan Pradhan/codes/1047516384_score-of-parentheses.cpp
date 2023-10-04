class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int ans=0;
        for(char c:s)
        {
            if(c=='(')
            {
                st.push(ans);
                ans=0;
            }
            else
            {
                if(ans==0)
                    ans=1;
                else
                    ans*=2;
                ans+=st.top();
                st.pop();
            }
        }
        return ans;
    }
};