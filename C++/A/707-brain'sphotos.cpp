#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool colored = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (!(c == 'W' || c == 'B' || c == 'G'))
                colored = true;
        }
    }

    cout << ((colored) ? "#Color" : "#Black&White");
}