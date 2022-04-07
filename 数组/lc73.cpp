//12ms 13MB
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        unordered_set<int> row, col;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        auto it = row.begin();
        while (it != row.end())
        {
           // cout << *it << endl;
            for (int i = 0; i < matrix[*it].size(); i++)
            {
                matrix[*it][i] = 0;
            }
            it++;
        }
        it = col.begin();
        while (it != col.end())
        {
            //cout << *it << endl;
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][*it] = 0;
            }
            it++;
        }
    }
};