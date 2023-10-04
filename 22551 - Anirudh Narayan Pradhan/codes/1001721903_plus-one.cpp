class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        int i=l-1;
        int carry=1;
        while(i>=0)
        {
            if(carry)
            {
                if(digits[i]==9)
                {
                    digits[i]=0;
                    // carry=1;
                }
                else
                {
                    digits[i]+=1;
                    carry=0;
                    break;
                }
            }
            i-=1;
        }
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
    }
};