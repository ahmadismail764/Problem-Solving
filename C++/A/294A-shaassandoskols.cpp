#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        (x > 0) ? (a[x - 1] += y) : 0;
        (x < n - 1) ? (a[x + 1] += a[x] - y - 1) : 0;

        a[x] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << "\n";
}
