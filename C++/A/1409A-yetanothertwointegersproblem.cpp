#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, diff;
        cin >> a >> b;
        diff = abs(a - b);
        long long ans = diff / 10 + ((diff % 10) ? 1 : 0);
        cout << ans << '\n';
    }
}
