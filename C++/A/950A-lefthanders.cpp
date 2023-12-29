#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, a;
    cin >> l >> r >> a;
    int min = ((l < r) ? l : r);
    int max = ((l > r) ? l : r);

    int diff = max - min;

    if (diff == 0)
    {
        min += a / 2;
        max += a / 2;
    }
    else
    {
        if (a >= diff)
        {
            min += diff;
            a -= diff;
            min += a / 2;
            max += a / 2;
        }
        else
        {
            min += a;
        }
    }

    cout << 2 * min << "\n";
}