#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;
    cin >> n >> k >> t;
    if (t < k + 1)
        cout << t;
    else if (t > k && t < n + 1)
        cout << k;
    else
        cout << k - (t - n);
}