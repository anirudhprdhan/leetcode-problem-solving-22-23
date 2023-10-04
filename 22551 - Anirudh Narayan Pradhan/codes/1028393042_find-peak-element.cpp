class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size_a=nums.size();
        if(size_a == 1) return 0;
        if(size_a == 2) 
        {
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        int l=0,r=size_a-1,m;
        while(l<r)
        {
            m=l+(r-l)/2;

            if(nums[m]>nums[m+1])
                r=m;
            else if(nums[m]<nums[m+1])
                l=m+1;
        }
        return l;
    }
};