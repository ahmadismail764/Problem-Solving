#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int table[n][n];
    for (int i = 0; i < n; i++)
    {
        table[0][i] = 1;
        table[i][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
            table[i][j] = table[i - 1][j] + table[i][j - 1];
    }
    int max_val = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            (table[i][j] > max_val) ? max_val = table[i][j] : 0;
    }
    cout << max_val;
}
