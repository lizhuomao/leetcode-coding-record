//4ms 8.8MB
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        char cnt[201];
        int idx = strs[0].size();
        string result = "";
        for (int i = 0; i < strs.size(); i++)
        {
            if (idx > strs[i].size()) idx = strs[i].size();
            for (int j = 0; j < strs[i].size(); j++)
            {
                if (i == 0) cnt[j] = strs[i][j];
                if (strs[i][j] != cnt[j])
                {
                    idx = idx > j ? j : idx;
                    break; 
                }
            }
        }
        result = string(strs[0].begin(), strs[0].begin() + idx);
        return result;
    }
};