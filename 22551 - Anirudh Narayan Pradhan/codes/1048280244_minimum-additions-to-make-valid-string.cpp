class Solution {
public:
    int addMinimum(string word) {
        stack<char> stk;
        int count=0;
        for(char ch:word)
        {
            switch(ch)
            {
                case 'a':
                        if(stk.empty())
                        {
                            stk.push('a');
                            break;
                        }
                        if(stk.top()=='a')
                            count+=2;
                        else if(stk.top()=='b')
                            count+=1;
                        stk.push('a');
                        break;
                case 'b':
                        if(stk.empty())
                        {
                            count+=1;
                            stk.push('b');
                            break;
                        }
                        if(stk.top()=='b')
                            count+=2;
                        else if(stk.top()=='c')
                            count+=1;
                        stk.push('b');
                        break;
                case 'c':
                        if(stk.empty())
                        {
                            count+=2;
                            stk.push('c');
                            break;
                        }
                        if(stk.top()=='c')
                            count+=2;
                        else if(stk.top()=='a')
                            count+=1;
                        stk.push('c');
                        break;
                default:
                        break;
            }
            
        }
        if(stk.top()=='a')
            count+=2;
        else if(stk.top()=='b')
            count+=1;
        return count;
    }
};