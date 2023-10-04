class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> out;
        for (int i=0;i<nums.size();i++)
        {
            if (out.find(target-nums[i])==out.end())
                out[nums[i]]=i;
            else 
                return {out[target-nums[i]],i};
        }

        return {-1,-1};
    }
};