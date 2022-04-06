//252ms 11.1MB

class Solution {
public:
    int countPrimes(int n) 
    {
        if (n < 2) return 0;
        bool cnt[5000001];
        cnt[0] = false;
        cnt[1] = false;
        for (int i = 2; i < n; i++)
        {
            cnt[i] = true;
        }
        for (int i = 2; i < n; i++)
        {
            if (!cnt[i]) continue;
            for (int j = 2; j <= n / i; j++)
            {
                if (i * j > n) break;
                cnt[j * i] = false;
            }
        }
        int cnti = 0;
        for (int i = 2; i < n; i++)
        {
            if (cnt[i] == true)cnti++;
        }
        return cnti;
    }
};