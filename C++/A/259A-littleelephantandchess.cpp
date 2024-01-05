#include <bits/stdc++.h>
using namespace std;

class Solver
{
    vector<string> board;

public:
    void get_board()
    {
        for (int i = 0; i < 8; i++)
        {
            string x;
            cin >> x;
            board.push_back(x);
        }
    }
    bool validator()
    {
        for (string row : board)
            if (row.find("BB") != string::npos || row.find("WW") != string::npos)
                return false;
        return true;
    }
};

int main()
{
    Solver Object;
    Object.get_board();
    cout << ((Object.validator()) ? "YES" : "NO");
}