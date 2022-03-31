//4ms 6.9MB
class Solution {
public:
    int myAtoi(string s) 
    {
        bool sign = 0;
        int result = 0;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' && flag == false) continue;
            else if (s[i] == '-' && flag == false) 
            {
                sign = 1;
                flag = true;
            }
            else if (s[i] == '+' && flag == false) 
            {
                sign = 0;
                flag = true;
            }
            else if (isdigit(s[i]))
            {
                flag = true;
                if (sign == 0)
                {
                    if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' >= INT_MAX % 10))
                    {
                        return INT_MAX;
                    }
                }
                else
                {
                    if (-result < INT_MIN / 10 || (-result == INT_MIN / 10 && s[i] - '0' >= -(INT_MIN % 10)))
                    {
                        cout <<"debug" << endl;
                        return INT_MIN;
                    }
                }
                cout << result * 10 << " " << s[i] - '0' << endl;
                result = result * 10 + (s[i] - '0');
            }
            else break;
        }
        if (sign == 0) return result;
        else return -result;
    }
};