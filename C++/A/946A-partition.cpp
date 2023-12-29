#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int positive = 0, other = 0;
    while (n--)
    {
        cin >> x;
        (x > 0) ? positive += x : other += x;
    }
    cout << positive - other;
}