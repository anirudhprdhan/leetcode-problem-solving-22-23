class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int rev1=0;

        while (temp)
        {
            rev1*=10;
            rev1+=temp%10;
            temp/=10;
        }
        temp=0;
        while (rev1)
        {
            temp*=10;
            temp+=rev1%10;
            rev1/=10;
        }
        if (temp==num)
            return true;
        return false;
    }
};