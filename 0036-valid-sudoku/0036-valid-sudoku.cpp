class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++)
        {
            vector<int> box(10, 0);
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue ;
                else
                    box[board[i][j] - '0']++;
                if (box[board[i][j] - '0'] > 1)
                    return false;
            }
        }
        for (int i = 0; i < 9; i++)
        {
            vector<int> box(10, 0);
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] == '.')
                    continue ;
                else
                    box[board[j][i] - '0']++;
                if (box[board[j][i] - '0'] > 1)
                    return false;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                vector<int> box(10, 0);
                for (int row = 0; row < 3; row++)
                {
                    for (int col = 0; col < 3; col++)
                    {
                        int x = i * 3 + row;
                        int y = j * 3 + col;

                    if (board[x][y] == '.')
                        continue ;
                    else
                        box[board[x][y] - '0']++;
                    if (box[board[x][y] - '0'] > 1)
                        return false;
                    }
                }
            }
        }


        return true;
    }
};