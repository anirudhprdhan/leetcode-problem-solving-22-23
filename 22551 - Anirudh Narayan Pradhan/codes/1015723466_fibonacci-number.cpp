class Solution {
public:
    int fib(int n) {
        int f1=0,f2=1,temp=0,i=1;
        if (n==1)
            return 1;
        while (i<n)
        {
            temp=f1+f2;
            f1=f2;
            f2=temp;
            ++i;
        }
        return temp;

    }
};