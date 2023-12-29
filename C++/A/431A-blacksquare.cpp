#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4], sum = 0;
    string s;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;
    for (char c : s)
    {
        int i = c - '0' - 1;
        sum += a[i];
    }
    cout << sum;
}