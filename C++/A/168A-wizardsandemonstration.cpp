#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    cout << ((ceil(y * n / 100.0) - x > 0) ? ceil(y * n / 100.0) - x : 0);
}
