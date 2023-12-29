#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll x;
        set<ll> patterns;
        while (n--)
        {
            cin >> x;
            patterns.insert(x);
        }
        int start = *patterns.begin();
        int end = *patterns.end() - 1;
    }
}