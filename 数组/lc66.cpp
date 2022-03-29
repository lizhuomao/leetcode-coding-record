//4ms 8.4MB
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        vector<int> result;
        int temp = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            result.push_back((digits[i] + temp) % 10);
            temp = (digits[i] + temp) / 10;
        }
        if (temp != 0) result.push_back(temp);
        reverse(result.begin(), result.end());
        return result;
    }
};