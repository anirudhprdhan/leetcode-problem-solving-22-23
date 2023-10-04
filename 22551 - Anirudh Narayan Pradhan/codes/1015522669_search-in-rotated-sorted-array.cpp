class Solution {
public:
    int search_i(vector<int>& n,int l, int r,int tar)
    {
        int m;
        if(n[l]==tar)
            return l;
        else if(n[r]==tar)
            return r;
        while(l<=r)
        {
            m=l+(r-l)/2;
            cout<<n[m]<<endl;
            if(n[m]==tar)
                return m;
            else if(n[m]>tar)
                r=m-1;
            else
                l=m+1;
        }
        
        return -1;
    }

    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
            if(nums[0]==target)
                return 0;
            else
                return -1;

        int l=0,r=nums.size()-1,m;
        int ref=nums[0];
        while(l<r)
        {
            m=l+(r-l)/2;
            if(nums[m]>nums[m+1])
                break;
            else if(ref>nums[m])
                r=m;
            else
                l=m+1;
        }
        // cout<<m<<endl;
        int ans1=search_i(nums,0,m,target);
        int ans2=search_i(nums,m+1,nums.size()-1,target);
        // cout<<ans1<<endl<<ans2<<endl;
        if(ans1==ans2)
            return -1;
        else if(ans1!=-1)
            return ans1;
        
        return ans2;
    }
};