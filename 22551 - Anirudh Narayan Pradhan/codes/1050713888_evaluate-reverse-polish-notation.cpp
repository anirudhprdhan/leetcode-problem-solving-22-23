class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i,j,ans;
        int num;
        stack<int> stk;
        for(string s: tokens)
        {
            if(isdigit(s[s.length()-1]))
            {
                num=stoi(s);
                stk.push(num);
                continue;
            }
            switch(s[0])
            {
                case '+':
                        i=stk.top();
                        stk.pop();
                        j=stk.top();
                        stk.pop();
                        stk.push(i+j);
                        break;
                case '-':
                        i=stk.top();
                        stk.pop();
                        j=stk.top();
                        stk.pop();
                        stk.push(j-i);
                        break;
                case '*':
                        i=stk.top();
                        stk.pop();
                        j=stk.top();
                        stk.pop();
                        stk.push(i*j);
                        break;
                case '/':
                        i=stk.top();
                        stk.pop();
                        j=stk.top();
                        stk.pop();
                        stk.push(j/i);
                        break;
                default:
                        break;
            }


        }
        return stk.top();
    }
};