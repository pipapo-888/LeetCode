class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_val = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            if (min_val < prices[i])
                profit = max(profit, prices[i] - min_val);
            else
                min_val = prices[i];
        }
        return profit;
    }
};