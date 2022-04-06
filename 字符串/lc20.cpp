//0ms 6.1MB
class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> sk;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') sk.push(s[i]);
            else if (s[i] == ')')
            {
                if (sk.empty()) return false;
                if (sk.top() == '(') sk.pop();
                else return false;
            }
            else if (s[i] == '}')
            {
                if (sk.empty()) return false;
                if (sk.top() == '{') sk.pop();
                else return false;
            }
            else if (s[i] == ']')
            {
                if (sk.empty()) return false;
                if (sk.top() == '[') sk.pop();
                else return false;
            }
        }
        return sk.empty();
    }
};