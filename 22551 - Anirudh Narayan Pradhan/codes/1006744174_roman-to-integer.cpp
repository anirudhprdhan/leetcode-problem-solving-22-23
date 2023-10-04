class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for (int i =s.length()-1;i>-1;i--)
        {
            switch(s[i])
            {
                case 'I':
                    ans+=1;
                    break;
                case 'V':
                    if((i-1)>-1 && s[i-1]=='I')
                    {
                        ans+=4;
                        i-=1;
                    }
                    else
                        ans+=5;
                    break;
                case 'X':
                    if((i-1)>-1 && s[i-1]=='I')
                    {
                        ans+=9;
                        i-=1;
                    }
                    else
                        ans+=10;
                    break;
                case 'L':
                    if((i-1)>-1 && s[i-1]=='X')
                    {
                        ans+=40;
                        i-=1;
                    }
                    else
                        ans+=50;
                    break;
                case 'C':
                    if((i-1)>-1 && s[i-1]=='X')
                    {
                        ans+=90;
                        i-=1;
                    }
                    else
                        ans+=100;
                    break;
                case 'D':
                    if((i-1)>-1 && s[i-1]=='C')
                    {
                        ans+=400;
                        i-=1;
                    }
                    else
                        ans+=500;
                    break;
                case 'M':
                    if((i-1)>-1 && s[i-1]=='C')
                    {
                        ans+=900;
                        i-=1;
                    }
                    else
                        ans+=1000;
                    break;
            }
        }
        return ans;
    }
};