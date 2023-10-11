class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int l = nums.size() / 3 ;
        vector<int> ans;
        sort(nums.begin(),nums.end()); //nlogn
        int temp=nums[0];
        int count=1;
        cout<<l<<endl;
        for(int i=1;i<nums.size();++i)
        {
            cout<<nums[i]<<endl;
            if(nums[i]!=temp)
            {
                cout<<"temp:"<<temp<<endl<<"count:"<<count<<endl;
                if(count>l)
                    ans.push_back(temp);
                count=1;
                temp=nums[i];
            }
            else
            {
                count+=1;
            }
        }
        if(count>l)
            ans.push_back(temp);
        return ans;
    }
};