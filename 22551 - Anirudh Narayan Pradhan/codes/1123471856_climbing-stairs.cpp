class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        if(n==1 || n==2 || n==3)
            return n;
        int sum=0;
        int t1=0,t2=1;
        for(int i=0;i<n;++i)
        {
            sum=t1+t2;
            t1=t2;
            t2=sum;
        }
        return sum;
    }
};