class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int val = prices[0], index = 0, n = prices.size(), profit = 0;
        for(int i=1; i<n; ++i) {
            if(val < prices[i]) {
                profit = max(profit , prices[i] - val);
            }
            else {
                val = prices[i];
                index = i;
            }
        }
        return profit;
    }
};
