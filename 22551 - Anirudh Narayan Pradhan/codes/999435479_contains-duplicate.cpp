class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> store;
        for(int i=0;i<nums.size();i++)
        {
            if(store.find(nums[i])!= store.end())
                return true;
            else
                store[nums[i]]=1;
        }
        return false;
    }
};