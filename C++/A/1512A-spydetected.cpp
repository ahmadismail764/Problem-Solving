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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] != a[1] && a[1] == a[2])
        {
            cout << 1 << '\n';
        }
        else
        {
            auto it = find_if(a.begin(), a.end(), [&](int x)
                              { return x != a[0]; });
            int ans = it - a.begin();

            cout << ans + 1 << '\n';
        }
    }
}
