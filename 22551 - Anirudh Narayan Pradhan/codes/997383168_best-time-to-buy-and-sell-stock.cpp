class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest=prices[0],max_profit=0;
        for (int i=1;i<prices.size();i++)
        {
            if(prices[i]<cheapest)
            {
                cheapest=prices[i];
                continue;
            }
            if(prices[i]-cheapest>max_profit)
            {
                max_profit=prices[i]-cheapest;
            }
        }
        return max_profit;
    }
};