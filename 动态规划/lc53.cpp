//84ms 68.7MB
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (dp[i - 1] + nums[i] < nums[i])
            {
                dp[i] = nums[i];
            }
            else
            {
                dp[i] = dp[i - 1] + nums[i];
            }
        }
        int maxs = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxs < dp[i]) maxs = dp[i];
        }
        return maxs;
    }
};