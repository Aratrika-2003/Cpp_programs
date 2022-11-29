int maxProfit(vector<int> &prices) {
    // add you logic here
	int profit = 0, maxprof = prices[0];
        
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < maxprof)
                maxprof = prices[i];
            else
                profit = max(profit, prices[i] - maxprof);
        }
        
        return profit;
}
