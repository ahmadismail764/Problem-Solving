#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        sort(s, s + n);
        int ans = INT_MAX;
        for (int i = 1; i < n; i++)
            ans = min(ans, s[i] - s[i - 1]);

        cout << ans << '\n';
    }
}