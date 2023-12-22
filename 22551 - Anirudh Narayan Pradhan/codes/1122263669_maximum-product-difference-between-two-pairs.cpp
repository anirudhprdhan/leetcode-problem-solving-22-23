class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=nums[0],max2=nums[0]-1,min1,min2;
        for(int i=1;i<nums.size();++i)
        {
            if(max1>=nums[i])
            {
                if(max2<nums[i])
                {
                    max2=nums[i];
                }
            }
            else if(max1<nums[i])
            {
                max2=max1;
                max1=nums[i];
            }
        }
        min1=max2;
        min2=max1;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]<min1)
            {
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2 && nums[i]>=min1)
            {
                min2=nums[i];
            }
        }
        cout<<max1<<max2<<endl;
        cout<<min1<<min2;
        return (max1*max2)-(min1*min2);
    }
};