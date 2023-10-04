class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int lsum=0,rsum=0;

        rsum=accumulate(nums.begin(), nums.end(), 0); //O(1)
        int b=0;
        for(int a:nums) //O(n)
        {
            rsum-=a;
            lsum+=b;
            ans.push_back(abs(rsum-lsum));
            b=a;
        }
        return ans;

    }
};