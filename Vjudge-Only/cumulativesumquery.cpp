#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> arr(n), pref(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    pref[0] = arr[0];
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + arr[i];
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (l ? pref[r] - pref[l - 1] : pref[r]) << '\n';
    }
}