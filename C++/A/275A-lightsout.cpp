#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    int state[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 1)
            {
                state[i][j] = 1 - state[i][j];
                (i > 0) ? state[i - 1][j] = 1 - state[i - 1][j] : 0;
                (j > 0) ? state[i][j - 1] = 1 - state[i][j - 1] : 0;
                (i < 2) ? state[i + 1][j] = 1 - state[i + 1][j] : 0;
                (j < 2) ? state[i][j + 1] = 1 - state[i][j + 1] : 0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << state[i][j];
        cout << '\n';
    }
}