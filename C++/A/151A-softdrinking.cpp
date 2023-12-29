#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int vol = k * l / nl;
    int limes = c * d;
    int salt = p / np;
    cout << min(vol, min(limes, salt)) / n;
}