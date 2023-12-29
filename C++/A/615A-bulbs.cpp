#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    vector<int> cnt(n);
    while (m--)
    {
        int k;
        cin >> k;
        vector<int> ys(k);
        for (int y : ys)
            cin >> y, cnt[y - 1]++;
    }

    bool flag = true;
    for (int x : cnt)
        (x <= 0) ? flag = false : 0;

    cout << ((flag) ? "YES\n" : "NO\n");
}