#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, r;
        cin >> n >> r;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        n = unique(a, a + n) - a;

        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
            (a[i] - ans * r > 0) ? ++ans : 0;
        cout << ans << '\n';
    }
}
