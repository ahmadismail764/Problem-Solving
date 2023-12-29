#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 2 == 0) ? n * n / 2 : n * n / 2 + 1) << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
                cout << ((j % 2 == 0) ? 'C' : '.');
            else
                cout << ((j % 2 == 0) ? '.' : 'C');
        }
        cout << '\n';
    }
}