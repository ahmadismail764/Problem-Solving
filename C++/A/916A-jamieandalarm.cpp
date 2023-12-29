#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    int ti = n * 60 + m;
    for (int i = 0;; i++)
    {
        int h = ti / 60, m = ti % 60;
        if (h / 10 == 7 || h % 10 == 7 || m / 10 == 7 || m % 10 == 7)
        {
            cout << i;
            break;
        }
        ti = (ti - x) % 1440;
    }
}