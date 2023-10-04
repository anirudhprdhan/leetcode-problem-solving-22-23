class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min=0;
        int i;
        for(i=1;i<strs.size();++i)
            if(strs[min].length() > strs[i].length())
                min=i;
        string ans="";
        bool flag=true;
        for(i=0;i<strs[min].length();++i)
        {
            flag=true;
            for(int j=0;j<strs.size();++j)
            {
                if(strs[min][i]!=strs[j][i])
                    flag=false;
            }
            if(flag)
                ans+=strs[min][i];
            else
                break;
        }
        return ans;
    }
};