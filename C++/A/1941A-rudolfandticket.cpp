#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> n >> m >> k;
        vector<int> left(n), right(m);
        for (int i = 0; i < n; i++)
            cin >> left[i];
        for (int i = 0; i < m; i++)
            cin >> right[i];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                sum += (left[i] + right[j] <= k);
        cout << sum << '\n';
    }
}