//4ms 7.1MB
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size()) return false;
        int cs[26], ct[26];

        for (int i = 0; i < 26; i++)
        {
            cs[i] = 0;
            ct[i] = 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            cs[s[i] - 'a']++;
            ct[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (cs[i] != ct[i]) return false;
        }
        return true;
    }
};