class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int l=nums.size();
        vector<int> ans(l);
        stack<pair<int,int>> stk;
        int pos=0,i;

        for ( i=0;i<l;++i) // create an array of size 2l // O(n)
        {
            nums.push_back(nums[i]);
            ans[i]=-1;
        }
        stk.push({nums[pos],pos});
        pos=1;
        for(;pos<2*l;++pos)
        {
            while(!stk.empty() && stk.top().first<nums[pos])
            {
                ans[stk.top().second]=nums[pos];
                stk.pop();
            }
            if(pos>=l)
                stk.push({nums[pos],pos-l});
            else
                stk.push({nums[pos],pos});
        }
        
        return ans;
    }
};