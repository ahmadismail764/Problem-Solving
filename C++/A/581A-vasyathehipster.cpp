#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int maxDays = min(a, b);
    int remaining = max(a, b) - maxDays;
    cout << maxDays << " " << ((remaining % 2 == 0) ? remaining / 2 : (remaining - 1) / 2);
}