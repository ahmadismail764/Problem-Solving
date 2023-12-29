#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int len = abs(a - b), cntA = len / 2, cntB = len - cntA;
    cout << (cntA * (cntA + 1) / 2) + (cntB * (cntB + 1) / 2);
}