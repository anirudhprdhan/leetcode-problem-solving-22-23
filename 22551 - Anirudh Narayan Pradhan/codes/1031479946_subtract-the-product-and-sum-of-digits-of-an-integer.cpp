class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int num;
        while(n)
        {
            num=n%10;
            sum+=num;
            prod*=num;
            n/=10;

        }
        return prod-sum;
    }
};