class Solution {
public:
    int search(vector<int>& nums, int target) {
        int m,l=0,r=nums.size()-1;
        if(l==r && nums[l] == target)   return l; 

        while(l<r)
        {
            m=l+(r-l)/2;
            cout<<m<<endl;
            if(nums[m]==target)
                return m;
            else if(nums[m]<target)
                l=m+1;
            else
                r=m-1;
        }
        if(nums[l]==target) return l;
        return -1;
    }
};