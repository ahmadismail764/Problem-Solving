#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, awins = 0, bwins = 0, draws = 0;
    cin >> a >> b;
    for (int i = 1; i < 7; i++)
    {
        if (abs(a - i) > abs(b - i))
            bwins++;
        else if (abs(a - i) == abs(b - i))
            draws++;
        else
            awins++;
    }
    cout << awins << ' ' << draws << ' ' << bwins;
}