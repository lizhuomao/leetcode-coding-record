//20ms 18.2MB
//暴力
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<char> hash;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == '.') continue;
                if (hash.find(board[i][j]) == hash.end()) hash.insert(board[i][j]);
                else return false;
            }
            hash.clear();
        }
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[j][i] == '.') continue;
                if (hash.find(board[j][i]) == hash.end()) hash.insert(board[j][i]);
                else return false;
            }
            hash.clear();
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int m = 3 * i; m < 3 * (i + 1); m++)
                {
                    for (int n = 3 * j; n < 3 * (j + 1); n++)
                    {
                        if (board[m][n] == '.') continue;
                        if (hash.find(board[m][n]) == hash.end()) hash.insert(board[m][n]);
                        else return false;
                    }
                }
                hash.clear();
            }
        }
        return true;
    }
};