#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, z, l;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z >> l;
        bool flag = (min(x, y) > max(z, l)) || (max(x, y) < min(z, l));
        cout << ((flag) ? "NO\n" : "YES\n");
    }
}