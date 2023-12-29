#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
char bus[N][5];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> bus[i][j];
        }
    }
    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (bus[i][j * 3] == 'O' && bus[i][j * 3 + 1] == 'O')
            {
                bus[i][j * 3] = '+';
                bus[i][j * 3 + 1] = '+';
                possible = true;
                break;
            }
        }
        if (possible)
            break;
    }
    if (possible)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
                cout << bus[i][j];
            cout << '\n';
        }
    }
    else
        cout << "NO";
}
