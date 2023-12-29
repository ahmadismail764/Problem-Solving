#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, current = 1;
    cin >> n >> m;
    while (m >= current)
    {
        m -= current;
        current++;
        current = ((current > n) ? 1 : current);
    }
    cout << m;
}