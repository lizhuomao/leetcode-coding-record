//0ms 5.7MB
class Solution {
public:
    int climbStairs(int n) 
    {
        int cnt[46] = {0};
        cnt[0] = 1;
        for (int i = 0; i < n; i++)
        {
            cnt[i + 1] = cnt[i] + cnt[i + 1];
            if (i + 2 <= n)cnt[i + 2] = cnt[i] + cnt[i + 2];
        }
        return cnt[n];
    }
};