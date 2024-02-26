// #include "bits/stdc++.h"
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     map<int, int> cnt;
//     int ans = 0;
//     for (int i = 0, x; i < n; ++i)
//     {
//         cin >> x;
//         if (!cnt[x])
//             ++ans, ++cnt[((1 << 31) - 1) ^ x];
//         else
//             --cnt[x];
//     }
//     cout << ans << "\n";
// }

// main()
// {
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }