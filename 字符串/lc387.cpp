//52ms 10.5MB
class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> hash;
        for (int i = 0; i < s.size(); i++)
        {
            if (hash.find(s[i]) != hash.end()) hash[s[i]]++;
            else hash[s[i]] = 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            unordered_map<char, int> :: iterator it = hash.find(s[i]);
            if (it -> second == 0) return i;
        }
        return -1;
    }
};