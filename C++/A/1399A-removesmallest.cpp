#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
            {
                flag = false;
                break;
            }
        }
        cout << ((flag) ? "YES\n" : "NO\n");
    }
}