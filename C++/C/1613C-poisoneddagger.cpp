#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, h;
        cin >> n >> h;
        vector<long long> seconds(n);
        for (long long i = 0; i < n; i++)
            cin >> seconds[i];
        long long start = 1, end = 1e18;
        while (start <= end)
        {
            long long mid = (start + end) / 2, damage = mid;
            for (long long i = 0; i < n - 1; i++)
                damage += min(seconds[i + 1] - seconds[i], mid);
            if (damage < h)
                start = mid + 1;
            else
                end = mid - 1;
        }
        cout << end + 1 << '\n';
    }
}