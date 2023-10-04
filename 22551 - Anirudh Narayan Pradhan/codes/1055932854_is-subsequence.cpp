class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int n=t.length(),m=s.length();
        if(m==0)    return true;
        if(n<m) return false;
        for(int i=0;i<n;++i)
        {
            if(s[j]==t[i])
                ++j;
            if(j==m)    return true;
        }
        return false;
    }
};