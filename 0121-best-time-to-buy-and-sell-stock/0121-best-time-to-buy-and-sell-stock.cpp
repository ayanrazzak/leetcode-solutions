class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;
        
        for(int i=0; i<prices.size(); i++)
        {
            int profit = prices[i] - minprice;

            if(prices[i] < minprice)
            {
                minprice = prices[i];
            }
            if(profit > maxprofit)
            {
                maxprofit = profit; 
            }
        }
        return maxprofit;
    }
};