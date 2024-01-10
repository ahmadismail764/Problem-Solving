#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> cnt(m + 2), ans;
    for (int i = 0; i < n; ++i)
    {
        int l, r;
        cin >> l >> r;
        ++cnt[l];
        --cnt[r + 1];
    }
    for (int i = 1; i <= m; ++i)
        cnt[i] += cnt[i - 1];
    for (int i = 1; i <= m; ++i)
        if (cnt[i] == 0)
            ans.push_back(i);
    cout << ans.size() << '\n';
    for (auto _ : ans)
        cout << _ << " ";
}