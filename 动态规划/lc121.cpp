//84ms 91.1MB
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minp = prices[0], idx = 0, result = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minp)
            {
                idx = i;
                minp =  prices[i];
            }
            if (prices[i] - minp > result)
            {
                result = prices[i] - minp;
            }
        }
        return result;
    }
};