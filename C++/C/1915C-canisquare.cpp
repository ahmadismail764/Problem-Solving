#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

int main()
{
    ull t;
    cin >> t;
    while (t--)
    {
        ull n, sum = 0;
        cin >> n;
        for (ull i = 0; i < n; i++)
        {
            ull x;
            cin >> x;
            sum += x;
        }
        ull squareRoot = sqrt(sum);
        bool flag = squareRoot * squareRoot == sum;
        cout << ((flag) ? "YES\n" : "NO\n");
    }
}