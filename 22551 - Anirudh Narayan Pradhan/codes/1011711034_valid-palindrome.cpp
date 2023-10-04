class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        // s=tolower(s);
        while(i<j)
        {
            if(s[i]==' ' || !isalnum(s[i]))
            {
                i+=1;
                continue;
            }
            if(s[j]==' ' || !isalnum(s[j]))
            {
                j-=1;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j]))
            {
                cout<<i;
                return false;
            }
            i+=1;
            j-=1;
        }
        return true;
    }
};