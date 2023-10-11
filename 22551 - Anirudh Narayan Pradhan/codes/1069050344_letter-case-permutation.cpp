class Solution {
public:
    int l;
    void rec(int i, string &s, vector<string> &ans)
    {
        if(i==l)
        {
            ans.push_back(s);
            return;
        }
        char c=s[i];
        if(isalpha(c))
        {
            rec(i+1,s,ans);
            if(islower(c))
                s[i]=toupper(c);
            else
                s[i]=tolower(c);
            rec(i+1,s,ans);    
        }
        else
            rec(i+1,s,ans);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        l = s.length();
        if(l==0)
            return ans;
        rec(0,s,ans);
        return ans;
    }
};