#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int side = min(max(2 * b, a), max(2 * a, b));
        cout << side * side << '\n';
    }
}