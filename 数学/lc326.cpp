//8ms 5.7MB
class Solution {
public:
    bool isPowerOfThree(int n)
    {
        int cnt[20];
        for (int i = 0; i < 20; i++)
        {
            cnt[i] = 1;
            for (int j = 0; j < i; j++) cnt[i] *= 3;
        }
        for (int i = 0; i < 20; i++)
        {
            if (cnt[i] == n) return true;
        }
        return false;
    }
};