class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        // s=tolower(s);
        while(i<j)
        {
            while(!isalnum(s[i]) && i<j)
            {
                i+=1;
            }
            while(!isalnum(s[j]) && i<j)
            {
                j-=1;
            }
            if(tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            i+=1;
            j-=1;
        }
        return true;
    }
};