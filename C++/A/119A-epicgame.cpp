#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y) { return (x == 0) ? y : gcd(y % x, x); }

int main()
{
    int a, b, n, k = 0;
    cin >> a >> b >> n;
    while (n >= 0)
    {
        ++k;
        n -= gcd((k & 1) ? a : b, n);
    }
    cout << (k & 1);
}