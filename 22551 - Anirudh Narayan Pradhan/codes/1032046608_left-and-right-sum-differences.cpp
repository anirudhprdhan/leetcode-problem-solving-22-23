class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int lsum=0,rsum=0;
        rsum=accumulate(nums.begin(), nums.end(), 0);
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