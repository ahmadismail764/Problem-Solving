#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x == 1)
            cout << 1 << ' ' << 0 << '\n';
        else if (x == 2)
            cout << 0 << ' ' << 1 << '\n';
        else
        {
            if (x % 3 == 1)
                cout << x / 3 + 1 << ' ' << x / 3 << '\n';
            else if (x % 3 == 2)
                cout << x / 3 << ' ' << x / 3 + 1 << '\n';
            else
                cout << x / 3 << ' ' << x / 3 << '\n';
        }
    }
}