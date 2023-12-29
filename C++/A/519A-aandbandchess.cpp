#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> values = {{'Q', 9}, {'R', 5}, {'B', 3}, {'N', 3}, {'P', 1}};
    string board = "", rank;
    for (int i = 0; i < 8; i++)
    {
        cin >> rank;
        board += rank;
    }

    int black = 0, white = 0;
    for (char s : board)
        (islower(s)) ? black += values[toupper(s)] : white += values[toupper(s)];
    if (black < white)
        cout << "White";
    else if (black > white)
        cout << "Black";
    else
        cout << "Draw";
}