#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, d;
    cin >> m >> d;
    if (m == 2)
        cout << ((d == 1) ? 4 : 5);
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        cout << ((d == 7) ? 6 : 5);
    else
        cout << ((d <= 5) ? 5 : 6);
}