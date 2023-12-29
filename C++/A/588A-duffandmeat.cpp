#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, p, money = 0, price = 100;
    cin >> n;
    while (n--)
    {
        cin >> a >> p;
        if (price > p)
            price = p;
        money += price * a;
    }
    cout << money;
}