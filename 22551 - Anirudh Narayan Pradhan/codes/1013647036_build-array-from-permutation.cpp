class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (auto& itr :  nums)
        {
            ans.push_back(nums[itr]);
        }
        return ans;
    }
};