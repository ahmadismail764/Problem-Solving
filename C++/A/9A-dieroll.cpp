#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int dot = 6 - max(y, w) + 1;
    int gcd = __gcd(dot, 6);
    cout << dot / gcd << '/' << 6 / gcd << '\n';
}