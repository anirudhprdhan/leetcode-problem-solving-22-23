class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
     bitset<32> num(n);
     bitset<32> ans;
    //  cout<<num;
    for (int i =0,j=31;i<32;i++,j--)
    {
        ans[j]=num[i];
    }

     return (uint32_t)(ans.to_ulong());
    }
};