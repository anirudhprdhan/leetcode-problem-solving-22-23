class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int l=t.length();
        int i=0;
        while(l)
        {
            if(s[i]!=t[i])
                return 0;
            --l;
            ++i;
        }
        return 1;
    }
};