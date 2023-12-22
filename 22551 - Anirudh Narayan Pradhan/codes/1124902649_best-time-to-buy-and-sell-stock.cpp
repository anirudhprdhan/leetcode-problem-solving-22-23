class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest=INT_MAX, max_profit=0;
        for(auto i : prices)
        {
            if(i<cheapest)
                cheapest=i;
            if(i-cheapest > max_profit)
                max_profit = i-cheapest;
        }
        return max_profit;
    }
};