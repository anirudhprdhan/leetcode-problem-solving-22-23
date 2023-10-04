class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        int l=nums.size();
        sort(nums.begin(),nums.end());
        while (i<l)
        {
            if(i+1<l && nums[i]==nums[i+1])
                i+=2;
            else
            {
                return nums[i];
            }
        }
        return 0;
    }
};