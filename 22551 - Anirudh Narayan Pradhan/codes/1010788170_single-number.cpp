class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for (int i=0;i<nums.size();)
        {
            if(i+1<nums.size() && nums[i]==nums[i+1])
                i+=2;
            else
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};