// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, vo, v1, a, l;
    cin >> c >> vo >> v1 >> a >> l;

    int days = 1, read = 0, have = 0;

    have = read = vo;
    while (have < c)
    {
        read = min(v1, read + a);
        have += read - l;
        days++;
    }
    cout << days;
}