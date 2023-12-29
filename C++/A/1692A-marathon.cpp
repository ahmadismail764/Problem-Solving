#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (a < b || a < c || a < d)
        {
            if (b > a)
                count++;
            if (c > a)
                count++;
            if (d > a)
                count++;
        }
        cout << count << '\n';
    }
}