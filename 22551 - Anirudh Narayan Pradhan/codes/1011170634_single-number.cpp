class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        int l=nums.size();
        int temp;
        vector<int>::iterator index;
        while (i<l)
        {
            temp=nums[i];
            nums.erase(nums.begin()+i);
            index = find(nums.begin(),nums.end(),temp);
            if(index!=nums.end())
            {
                nums.erase(nums.begin()+(index-nums.begin()));
                l-=2;
            }
            else
                return temp;
        }
        return 0;
    }
};