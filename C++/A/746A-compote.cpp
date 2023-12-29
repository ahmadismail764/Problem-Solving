#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, apples, lemons, pears;
    cin >> a >> b >> c;
    apples = a;
    lemons = b / 2;
    pears = c / 4;
    cout << min(apples, min(lemons, pears)) * 7;
}