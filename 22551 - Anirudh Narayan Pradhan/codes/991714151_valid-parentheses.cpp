class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> bin;
        for (int i=0;i<n;i++)
        {
            if (s[i]==' ')
                continue;
            if(bin.empty())
            {
                if(s[i] == ')' || s[i] == '}' || s[i] == ']')
                    return false;
                bin.push(s[i]);
                continue;
            }
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(s[i] ==')' and bin.top()=='(')
                    bin.pop();
                else if(s[i] =='}' and bin.top()=='{')
                    bin.pop();
                else if(s[i] ==']' and bin.top()=='[')
                    bin.pop();
                else
                    return false;
            }         
            else
                bin.push(s[i]);      
        }
        if (bin.empty())
            return true;
        else
            return false;    
    }
};