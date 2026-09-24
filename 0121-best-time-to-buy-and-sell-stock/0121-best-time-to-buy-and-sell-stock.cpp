class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prices = prices[0];
        int max_profit = 0;
        for(int i=0; i<prices.size(); i++)
        {
            int profit = prices[i] - min_prices;
            if(profit > max_profit)
            {
                max_profit = profit;
            }
            if(prices[i] < min_prices)
            {
                min_prices = prices[i];
            }
        }
        return max_profit;
    }
};