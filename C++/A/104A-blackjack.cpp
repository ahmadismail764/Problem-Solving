#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, required;
    cin >> n;
    required = n - 10;
    if (required <= 0 || required > 11)
        cout << 0;
    else if (required == 10)
        cout << 15;
    else
        cout << 4;
}