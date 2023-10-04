class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int len=nums.size();
        int i=0,l=len/2;
        vector<int> ans;
        for(;i<len/2&&l<len;i++,l++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[l]);
        }
        return ans;
    }
};