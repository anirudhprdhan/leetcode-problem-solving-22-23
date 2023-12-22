class Solution {
public:
    int maxScore(string s) {
        int maxx=0;
        int len=s.length();
        int point=0;
        int tmp;
        while(point<len-1)
        {
            tmp=0;
            for(int i = 0 ; i <= len ; ++i)
            {
                if(s[i] == '0' && i<=point)
                    tmp+=1;
                else if(s[i] == '1' && i>point)
                    tmp+=1;
            }
            maxx= max(maxx,tmp);
            point+=1;
        }
        return maxx;
    }
};