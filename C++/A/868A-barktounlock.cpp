#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s, pass;
    cin >> pass >> n;
    if (n == 1)
    {
        cin >> s;
        if (s == pass)
            cout << "YES";
        else
        {
            reverse(s.begin(), s.end());
            cout << ((s == pass) ? "YES" : "NO");
        }
    }
    else
    {
        int flag = 0, okf = 0, okl = 0;
        while (n--)
        {
            cin >> s;
            if (pass[0] == s[1])
                okf = 1;
            if (pass[1] == s[0])
                okl = 1;
            if (pass == s)
                flag = 1;
        }
        cout << (((flag == 1 || (okf == okl && okf == 1))) ? "YES" : "NO");
    }
}