// dp TLE
    vector<vector<int>> dp(prices.size() + 1, vector<int>(prices.size() + 1));
    //i, j 表示第i支股票在第j天卖出
    for (int i = 0; i < prices.size(); i++)
    {
        dp[i][0] = prices[i] - prices[0];
        dp[i][i + 1] = dp[i][0];
        for (int j = 1; j <= i; j++)
           {
            dp[i][j] = dp[j - 1][j] + prices[i] - prices[j];
            if (dp[i][j] > dp[i][i + 1]) dp[i][i + 1] = dp[i][j];
        }
    }
    return dp[prices.size() - 1][prices.size()];

//贪心算法：将交易等价与每天都买卖
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int benefit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            int temp = prices[i] - prices[i - 1];
            if (temp > 0)benefit += temp;
        }
        return benefit;

    }
};
//4ms 12.8MB