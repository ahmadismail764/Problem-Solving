#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << ((a == b) ? "-1" : to_string(max(a.length(), b.length())));
}