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
        sort(s.begin(), s.end());
        bool k = true;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] - s[i - 1] != 1)
            {
                k = false;
                break;
            }
        }
        (k) ? cout << "yes\n" : cout << "no\n";
    }
}