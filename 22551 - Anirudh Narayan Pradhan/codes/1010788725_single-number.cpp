class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        int l=nums.size();
        for (int i=0;i<l;)
        {
            if(i+1<l && nums[i]==nums[i+1])
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