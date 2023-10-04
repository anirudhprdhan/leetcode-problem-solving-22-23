class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ans="",temp="",res="";
        
        for(int i=0;i<(s.length()-1);i++)
        {
            temp+=s[i]; // substring that repeats
            if(s.length()%temp.length()==0) // move forward only if the length of the substring exactly divides the length of the string
            {
                res="";
                for(int j=1;j<=int(s.length()/temp.length());j++) // create a new string of length s.length() 
                    res+=temp;
                if(res==s) //check if the string matches. 
                    return 1;
            } // continue till end of string length
            
        }
            
        return 0;
    }
};