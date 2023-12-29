#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char c = 'A'; c <= 'Z'; c++)
    {
        int first = n;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++)
        {
            if (s[i] != c)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}