class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left = 0, right = 1;
        if(prices.size() == 1)
            return 0;
        int currentProfit;
        int maxProfit = 0;
    
        int size = prices.size();
        while(right < size)
        {
            if(prices[right] > prices[left])
            {
                currentProfit = prices[right] - prices[left];
                maxProfit = max(currentProfit, maxProfit);
            }
            else 
            {
                left = right;
            }
            right++;
        }
        return maxProfit;
        
    }
};