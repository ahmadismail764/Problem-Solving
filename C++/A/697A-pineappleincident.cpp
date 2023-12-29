#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, s, x;
    cin >> t >> s >> x;
    if (x == t)
        cout << "YES";
    else if (x < t)
        cout << "NO";
    else
    {
        x -= t;
        if (x == 1)
            cout << "NO";
        else if (x % s == 0 || (x - 1) % s == 0)
            cout << "YES";
        else
            cout << "NO";
    }
}