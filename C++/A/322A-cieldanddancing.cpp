#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << n + m - 1 << '\n';
    for (int i = 1; i <= m; ++i)
        cout << "1 " << i << '\n';
    for (int i = 2; i <= n; ++i)
        cout << i << " 1" << '\n';
}