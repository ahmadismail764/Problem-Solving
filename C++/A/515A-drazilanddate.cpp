#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    cout << (((s < a + b) || (s - (a + b)) % 2 == 1) ? "No" : "Yes");
}