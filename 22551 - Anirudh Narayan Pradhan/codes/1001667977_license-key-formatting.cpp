class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int l= s.length();
        int i=l-1,count=0;
        string ans="";
        
        while(i>=0)
        {
            if(isdigit(s[i]))
            {
                ans.insert(0,string(1,s[i]));
                count+=1;
            }
            else if(isalpha(s[i]))
            {
                ans.insert(0,string(1,toupper(s[i])));
                count+=1;
            }
            
            
            if(count==k && i!=0)
            {
                if(s[i-1]!='-'){
                ans.insert(0,string(1,'-'));
                count=0;
                }
            }
            i-=1;
            
        }
        return ans;
    }
};