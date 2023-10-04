class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i,j;
        stack<int> stk;
        for(string s: tokens)
        {
            if(isdigit(s[s.length()-1]))
            {
                stk.push(stoi(s));
                continue;
            }
            i=stk.top();
            stk.pop();
            j=stk.top();
            stk.pop();

            switch(s[0])
            {
                case '+':
                        j=j+i;
                        break;
                case '-':
                        j=j-i;
                        break;
                case '*':
                        j=j*i;
                        break;
                case '/':
                        j/=i;
                        break;
                default:
                        break;
            }
            stk.push(j);
        }
        return stk.top();
    }
};