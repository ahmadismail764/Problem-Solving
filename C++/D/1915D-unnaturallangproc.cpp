#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        string res = "";
        while (!s.empty())
        {
            int x;
            x = ((s.back() == 'a' || s.back() == 'e') ? 2 : 3);
            while (x--)
            {
                res += s.back();
                s.pop_back();
            }
            res += '.';
        }
        res.pop_back();
        reverse(res.begin(), res.end());
        cout << res << '\n';
    }
}