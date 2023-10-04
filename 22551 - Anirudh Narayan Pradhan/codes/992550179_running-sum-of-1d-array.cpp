class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int siz=nums.size();
        // check if the nums is empty or not
        if(siz!=0)
        {
            sum.insert(sum.begin(),nums[0]);
            for (int i=1;i<siz;i++)
            {
                sum.insert(sum.begin()+i,sum[i-1]+nums[i]);
            }
            return sum;
        }
        return sum;
    }
};