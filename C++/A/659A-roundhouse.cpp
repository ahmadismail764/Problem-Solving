#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << (((a - 1 + b) % n + n) % n + 1);
}