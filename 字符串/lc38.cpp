//4ms 6.2MB
class Solution {
public:
    string countAndSay(int n) 
    {
        if (n == 1) return "1";
        string s = "1";
        for (int i = 1; i < n; i++)
        {
            char mem[5000] = {' '};
            int cnt[5000] = {0};
            int idx = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (mem[idx] == ' ') mem[idx] = s[j];
                if (mem[idx] == s[j]) cnt[idx]++;
                else
                {
                    idx++;
                    mem[idx] = s[j];
                    cnt[idx]++;
                }
            }
            char temp[15000];
            for (int j = 0; j <= idx; j++)
            {
                temp[j * 2] =  char(cnt[j] + '0');
                temp[j * 2 + 1] = mem[j];
            }
            temp[(idx + 1) * 2] = '\0';
            s = string(temp);
        }
        return s;
    }
};