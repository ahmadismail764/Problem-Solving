#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, number, total = 0;
    cin >> n >> x;
    while (cin >> number)
        total += number;
    total = abs(total);
    cout << total / x + min(total % x, 1);
}