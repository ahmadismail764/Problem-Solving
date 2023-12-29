#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    cout << ((k >= 3 * n) ? 0 : 3 * n - k);
}