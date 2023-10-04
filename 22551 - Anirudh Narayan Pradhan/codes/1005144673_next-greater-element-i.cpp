class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int j;
        for(int i =0 ; i<nums1.size();++i)
        {
            j=0;
            while(j<nums2.size() && nums1[i]!=nums2[j])
                j+=1;
            if(j==nums2.size())
                ans.push_back(-1);
            else //equal element found
            {
                j+=1;
                while(j<nums2.size() && nums1[i]>nums2[j])
                    j+=1;
                
                
                if(j==nums2.size())
                    ans.push_back(-1);
                else if(nums1[i]<nums2[j])
                    ans.push_back(nums2[j]);
            }
        }
        return ans;
    }
};