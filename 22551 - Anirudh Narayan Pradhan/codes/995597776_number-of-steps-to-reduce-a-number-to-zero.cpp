class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        for(;num;ans++)
        {
            if (num%2)
                --num;
            else
                num/=2;
        }
        return ans;      
    }
};