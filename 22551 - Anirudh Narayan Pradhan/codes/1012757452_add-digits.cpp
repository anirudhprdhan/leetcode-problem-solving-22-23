class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        while(num>=10)
        {
            ans=0;
            while(num>0)
            {
                ans+=num%10;
                num/=10;
            }
            num=ans;
        }
        return num;
    }
};