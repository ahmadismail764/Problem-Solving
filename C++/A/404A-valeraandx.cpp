#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int board_size;
    vector<string> board;

public:
    void input()
    {
        cin >> board_size;
        for (int i = 0; i < board_size; ++i)
        {
            string x;
            cin >> x;
            board.push_back(x);
        }
    }
    bool isDiagonal()
    {
        if (board.empty() || board.size() != board[0].size())
            return false;
        char diagonalChar = board[0][0];
        for (int i = 0; i < board_size; ++i) // Diagonal
            if (board[i][i] != diagonalChar)
                return false;
        for (int i = 0; i < board_size; ++i) // Anti-diagonal
            if (board[i][board_size - 1 - i] != diagonalChar)
                return false;
        for (int i = 0; i < board_size; ++i) // Other characters
            for (int j = 0; j < board_size; ++j)
                if (((i != j && i + j != board_size - 1) && (board[i][j] != board[0][1] || board[i][j] == diagonalChar)))
                    return false;
        return true;
    }
};

int main()
{
    Solver object;
    object.input();
    cout << ((object.isDiagonal()) ? "YES" : "NO");
}