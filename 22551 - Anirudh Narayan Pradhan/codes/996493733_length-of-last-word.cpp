class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size();
        // string length is 0
        if(l==0)
            return 0;
    
        int i=l-1;
        if(l==1 && s[i]!=' ')
            return 1;

        //iterate till we find a non space 
        while(i>=0 && s[i]==' ' )
            i-=1;
    
        int count=0;
        while(i>=0 && s[i]!=' ' )
        {
            count+=1;
            i-=1;
        }
        return count;
    }
};