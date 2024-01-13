#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max_sum = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int l = 0; l < n; ++l)
    {
        for (int r = l; r < n; ++r)
        {
            int sum_a = 0, sum_b = 0;

            for (int i = l; i <= r; ++i)
            {
                sum_a |= a[i];
                sum_b |= b[i];
            }
            max_sum = max(max_sum, sum_a + sum_b);
        }
    }
    cout << max_sum;
}
