class Solution {
public:
    vector<vector<int>> ans;
    void repeat(vector<int> nums, int i)
    {
        if(i>=nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int x=i;x<nums.size();++x)
        {
            swap(nums[i],nums[x]);
            repeat(nums,i+1);
            swap(nums[i],nums[x]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int i=0;
        repeat(nums,i);
        return ans;
    }
};