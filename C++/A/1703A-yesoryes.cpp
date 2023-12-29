#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << ((s == "yes") ? "YES\n" : "NO\n");
    }
}