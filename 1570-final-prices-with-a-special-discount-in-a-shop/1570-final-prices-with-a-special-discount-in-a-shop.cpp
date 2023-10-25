class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i =0, j=1;

        while(i<prices.size()-1 && j< prices.size())
        {
            if(prices[i]>=prices[j])
            {
                prices[i] = prices[i] - prices[j];
                i++;
                j=i+1;
            }
            else
            {
                j++;
            }
            if(j==prices.size())
            {
                i++;j=i+1;
            }
        }
        return prices;
    }
};