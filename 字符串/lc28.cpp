//68ms 7.3MB
//KMP
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if (needle.size() == 0) return 0;
        int pi[needle.size()];
        pi[0] = 0;
        for (int i = 1, j = 0; i < needle.size(); i++)
        {
            while (j > 0 && needle[i] != needle[j])
            {
                j = pi[j - 1];
            }
            if (needle[i] == needle[j]) j++;
            pi[i] = j;
        }
        for (int i = 0, j = 0; i < haystack.size(); i++)
        {
            //cout << i << " " << j << endl;
            while (j > 0 && haystack[i] != needle[j])
            {
                j = pi[j - 1];
            }
            if (haystack[i] == needle[j]) j++;
            if (j == needle.size()) return i - (needle.size() - 1);
        }
        return -1;
    }
};