#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << ((s.find('H') != string::npos || s.find('Q') != string::npos || s.find('9') != string::npos) ? "YES" : "NO");
}