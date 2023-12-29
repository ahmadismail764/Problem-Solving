#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int damaged_dragons = 0;
    for (int i = 1; i <= d; i++)
        (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) ? damaged_dragons++ : 0;
    cout << damaged_dragons;
}