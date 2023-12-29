#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> cake(n);
    for (int i = 0; i < n; i++)
        cin >> cake[i];

    vector<int> row_count(n, 0);
    vector<int> col_count(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cake[i][j] == 'C')
            {
                row_count[i]++;
                col_count[j]++;
            }
        }
    }
    int happiness = 0;
    for (int count : row_count)
        happiness += (count * (count - 1)) / 2;
    for (int count : col_count)
        happiness += (count * (count - 1)) / 2;
    cout << happiness << '\n';
}
