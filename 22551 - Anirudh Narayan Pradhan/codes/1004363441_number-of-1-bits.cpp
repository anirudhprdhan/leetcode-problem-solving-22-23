class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n)
        {
            if(n&1)
                count+=1;
            n=n>>1;
        }
        return count;
    }
};