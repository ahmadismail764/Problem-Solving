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
        cout << ((count(s.begin(), s.end(), 'a') != count(s.begin(), s.end(), 'b')) ? "NO\n" : "YES\n");
    }
}