#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool canmakepile(ll n, ll m)
{
    if (n == m)
        return true;
    else if (n % 3 != 0)
        return false;
    else
        return (canmakepile(n / 3, m) || canmakepile(2 * n / 3, m));
}

int main()
{
    cout.sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << (canmakepile(n, m) ? "YES\n" : "NO\n");
    }
}