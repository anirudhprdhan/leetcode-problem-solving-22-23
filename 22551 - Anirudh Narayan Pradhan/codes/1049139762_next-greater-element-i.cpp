class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int l=nums2.size()-1;
        for(int i=0;i<nums1.size();++i)
        {
            stack<int> stk;
            for (int j=l;j>=0;--j)
            {
                if(nums1[i]<nums2[j])
                {
                    stk.push(nums2[j]);
                }
                if(nums1[i]==nums2[j])
                    break;
            }
            if(stk.empty()) ans.push_back(-1);
            else    ans.push_back(stk.top());

        }
        return ans;
    }
};