#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n - 1 && k > 0; i++)
        {
            if (a[i] < k)
            {
                k -= a[i];
                a[n - 1] += a[i];
                a[i] = 0;
            }
            else
            {
                a[i] -= k;
                a[n - 1] += k;
                k = 0;
            }
        }

        for (int x : a)
            cout << x << ' ';
        cout << '\n';
    }
}