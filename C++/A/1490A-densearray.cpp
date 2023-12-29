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
        int last;
        cin >> last;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int nw;
            cin >> nw;
            int a = min(last, nw), b = max(last, nw);
            while (a * 2 < b)
                a *= 2, ++ans;
            last = nw;
        }
        cout << ans << "\n";
    }
}
