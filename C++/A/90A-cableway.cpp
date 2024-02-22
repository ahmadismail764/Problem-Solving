#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    int ans = 30 + 3 * ((r + 1) / 2 - 1);
    ans = max(ans, 31 + 3 * ((g + 1) / 2 - 1));
    ans = max(ans, 32 + 3 * ((b + 1) / 2 - 1));
    cout << ans;
}