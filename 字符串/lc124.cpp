//8ms 7.1MB
class Solution {
public:
    bool isPalindrome(string s) 
    {
        int i = 0, j = s.size() - 1;
        while(i < j)
        {
            // cout << i << " " << j << endl;
            // cout << s[i] << " " << s[j] << endl;
            if (!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if (!isalnum(s[j]))
            {
                j--;
                continue;
            }
            if (isalpha(s[i]) && isalpha(s[j]))
            {
                if (s[i] == s[j] || s[i] - 'a' + 'A' == s[j] || s[i] - 'A' + 'a' == s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == s[j])
            {
                i++; 
                j--;
            }
            else return false;
        }

        return true;
    }
};