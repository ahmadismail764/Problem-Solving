#include <bits/stdc++.h>
using namespace std;

int main()
{
    string landscape;
    cin >> landscape;
    string a = "ABC", b = "ACB", c = "BAC", d = "BCA", e = "CAB", f = "CBA";
    if (landscape.find(a) != string::npos || landscape.find(b) != string::npos || landscape.find(c) != string::npos || landscape.find(d) != string::npos || landscape.find(e) != string::npos || landscape.find(f) != string::npos)
        cout << "Yes\n";
    else
        cout << "No\n";
}