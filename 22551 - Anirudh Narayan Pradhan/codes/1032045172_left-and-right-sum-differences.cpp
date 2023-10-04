class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0;
        vector<int> ans;
        int lsum=0,rsum=0;
        for(int a:nums)
        {
            total+=a;
        }
        rsum=total;
        for(int i=0;i<nums.size();++i)
        {
            rsum-=nums[i];
            if(i>0)
                lsum+=nums[i-1];
            ans.push_back(abs(rsum-lsum));
        }
        return ans;

    }
};