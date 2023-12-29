#include <bits/stdc++.h>
using namespace std;

int main()
{
    char sel[510][510];
    int R, C;
    bool flg = true;
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> sel[i][j];
            if (i == 0 && j > 0 && ((sel[i][j] == 'S' && sel[i][j - 1] == 'W') || (sel[i][j] == 'W' && sel[i][j - 1] == 'S')))
                flg = false;
            else if (j == 0 && i > 0 && ((sel[i][j] == 'S' && sel[i - 1][j] == 'W') || (sel[i][j] == 'W' && sel[i - 1][j] == 'S')))
                flg = false;
            else if (j > 0 && (sel[i][j] == 'S' && (sel[i][j - 1] == 'W' || sel[i - 1][j] == 'W')) || (sel[i][j] == 'W' && (sel[i][j - 1] == 'S' || sel[i - 1][j] == 'S')))
                flg = false;
            if (sel[i][j] == '.')
                sel[i][j] = 'D';
        }
    }

    if (!flg)
        cout << "No\n";
    else
    {
        cout << "Yes\n";
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
                cout << sel[i][j];
            cout << '\n';
        }
    }
}