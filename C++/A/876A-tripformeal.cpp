#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int x = min(a, min(b, c));
    cout << ((x == a || x == b || n == 1) ? min(a, b) * (n - 1) : min(a, b) + (c * (n - 2)));
}