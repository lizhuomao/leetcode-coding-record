//12ms 5.9MB
class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t result = 0;
        int i = 0;
        while (n != 0 || i != 32)
        {
            result *= 2;
            result += (n % 2);
            n /= 2;
            i++;
            cout << result << endl;
        }
        return result;    
    }
};