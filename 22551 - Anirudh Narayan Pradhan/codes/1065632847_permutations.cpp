class Solution {
public:
    void repeat(vector<int> nums, int i,vector<vector<int>> &ans)
    {
        if(i>=nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int x=i;x<nums.size();++x)
        {
            swap(nums[i],nums[x]);
            repeat(nums,i+1,ans);
            swap(nums[i],nums[x]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        repeat(nums,i,ans);
        return ans;
    }
};