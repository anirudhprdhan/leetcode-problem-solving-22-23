class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;

        for(char ch : s)
        {
            if(!stk.empty() && (std::tolower(stk.top()) == std::tolower(ch)) && (stk.top() != ch))
                stk.pop();
            else
                stk.push(ch);
        }

        string ans = "";
        while(!stk.empty()) {
            ans = stk.top() + ans;
            stk.pop();
        }

        return ans;
    }
};