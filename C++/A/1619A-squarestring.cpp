#include <bits/stdc++.h>
using namespace std;

bool is_square(const string &s)
{
    int n = s.length();
    if (n % 2 != 0)
        return false;
    string first_half = s.substr(0, n / 2);
    string second_half = s.substr(n / 2);
    return first_half == second_half;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << ((is_square(s)) ? "YES" : "NO") << endl;
    }
}