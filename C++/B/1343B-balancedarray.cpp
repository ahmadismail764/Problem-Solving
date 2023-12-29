#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> a(n);
        int even_sum = 0;
        for (int i = 0; i < n / 2; i++)
        {
            a[i] = (i + 1) * 2;
            even_sum += a[i];
        }

        int odd_sum = 0;
        for (int i = n / 2; i < n - 1; i++)
        {
            a[i] = (i - n / 2 + 1) * 2 - 1;
            odd_sum += a[i];
        }

        a[n - 1] = even_sum - odd_sum;
        if (a[n - 1] % 2 == 0 || a[n - 1] <= 0)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << '\n';
    }
}