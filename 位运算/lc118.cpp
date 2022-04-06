//0ms 6.4MB
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> r(numRows);
        r[0].push_back(1);
        for (int i = 1; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                int m = 0, n = 0;
                if (i - 1 >= j) m = r[i - 1][j];
                if (j != 0) n = r[i - 1][j - 1];
                r[i].push_back(m + n);
            }
        }
        return r;
    }
};