class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int> stk;
        string x;
        int i=0;
        char k='1';
      
        while(i<pattern.size())
        {
            if(pattern[i]=='D')
            {
                stk.push(k);
                k++;
            }
            else if(pattern[i]=='I' && !stk.empty())
            {
                x.push_back(k);
                while(!stk.empty())
                {
                    int temp=stk.top();
                    stk.pop();
                    x.push_back(temp);
                }
                k++;
            }
            else
            {
                x.push_back(k);
                k++;
            }
            i++;

        }


     
        int z=pattern.size();
        stk.push(z+1+'0');
        while(!stk.empty())
        {
            int t=stk.top();
            stk.pop();
            x.push_back(t);
            k++;
        }
        return x;
    }
};