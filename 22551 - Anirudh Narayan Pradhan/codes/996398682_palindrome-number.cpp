class Solution {
public:
    bool isPalindrome(int x) {
        if (x>=0)
        {
            long int l,y=x;
            long int n=0;
            while(y)
            {
                l=y%10;
                y/=10;
                n=(n*10)+l;
            }
            if (n==x)
                return true;
            else
                return false;
        }
        return false;
        
    }
};