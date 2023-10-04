class Solution {
public:
    string removeStars(string s) {
        string ans="";
        for(char ch : s)
        {
            if(ch=='*')
            {
                if(ans.length()!=0)
                    ans.pop_back();
            }
            else
                ans+=ch;
        }
        return ans;
    }
};