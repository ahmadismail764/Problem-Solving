#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cout << ((n <= 2) ? 1 : (n - 3) / x + 2) << '\n';
    }
}