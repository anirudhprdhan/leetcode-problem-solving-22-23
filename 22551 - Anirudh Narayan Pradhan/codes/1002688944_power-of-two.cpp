class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        double a=log2(n);
        if((long int)a == a)
            return true;
        return false;

    }
};