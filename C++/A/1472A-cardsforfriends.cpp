#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int pieces = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            pieces *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            pieces *= 2;
        }
        cout << ((pieces >= n) ? "YES" : "NO") << endl;
    }
}