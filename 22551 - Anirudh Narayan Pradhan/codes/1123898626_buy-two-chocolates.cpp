class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int t1=INT_MAX,t2=INT_MAX;
        for(auto i : prices)
        {
            if(t1>i)
            {
                t2=t1;
                t1=i;
            }
            else if(t2>i)
                t2=i;
        }
        if(t1+t2 > money)
            return money;
        return money - t1 - t2;
    }
};