//0ms 7.6MB
class Solution {
public:
    int rob(vector<int>& nums) 
    {
        vector<vector<int>> dp(2, vector<int>(nums.size()));
        dp[0][0] = 0;
        dp[1][0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            dp[0][i] = dp[0][i - 1] > dp[1][i - 1] ? dp[0][i - 1] : dp[1][i - 1];
            dp[1][i] = dp[0][i - 1] + nums[i];
        }
        return dp[0][nums.size() - 1] > dp[1][nums.size() - 1] ? dp[0][nums.size() - 1] : dp[1][nums.size() - 1];
    }
};