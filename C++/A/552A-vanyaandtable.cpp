#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        result += ((c - a + 1) * (d - b + 1));
    }
    cout << result;
}