#include <bits/stdc++.h>
using namespace std;

int main()
{
    int na, nb, k, m;
    cin >> na >> nb >> k >> m;
    vector<int> a(na), b(nb);
    for (int i = 0; i < na; i++)
        cin >> a[i];
    for (int i = 0; i < nb; i++)
        cin >> b[i];
    cout << ((a[k - 1] < b[nb - m]) ? "YES" : "NO");
}