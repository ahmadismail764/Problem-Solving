#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int diff = a - b;
        if (diff == 0)
            cout << 0 << '\n';
        else if ((diff > 0 && diff % 2 == 0) || (diff < 0 & abs(diff) % 2))
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
}