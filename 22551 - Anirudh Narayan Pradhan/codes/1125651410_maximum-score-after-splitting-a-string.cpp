class Solution {
public:
    int score(string first,string second)
    {
        int f=0,s=0;
        int j,i;
        for(i = first.length()-1,j=0; i>-1;j+=1 , --i)
            if(first[i]=='0')
                f+=1;
        for(i = second.length()-1,j=0; i>-1;j+=1 , --i)
            if(second[i]=='1')
                s+=1;
        return f+s;
    }

    int maxScore(string s) {
        int maxx=0;
        for(int i = 1 ; i<s.length() ; ++i)
            maxx = max(maxx, score(s.substr(0,i),s.substr(i,s.length()-i)));
        return maxx;
    }
};