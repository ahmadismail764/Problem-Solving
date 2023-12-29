#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    unordered_set<int> nums;
    int a = (c1 - r2 + d1) / 2;
    if (a <= 9 && a > 0)
        nums.insert(a);

    int b = (d2 - c1 + r1) / 2;
    if (b <= 9 && b > 0)
        nums.insert(b);

    int c = (c1 - r1 + d2) / 2;
    if (c <= 9 && c > 0)
        nums.insert(c);

    int d = (d1 - c1 + r2) / 2;
    if (d <= 9 && d > 0)
        nums.insert(d);

    if (nums.size() == 4)
    {
        cout << a << ' ' << b << '\n'
             << c << ' ' << d << '\n';
    }
    else
        cout << -1;
}