#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, sub = "";
    cin >> s;
    int ctr = 0;
    sub = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        sub += s[i];
        for (int j = 0; j < sub.size(); j++)
        {
            if (sub[j] != s[i])
            {
                ctr++;
                sub = "";
                sub += s[i];
                break;
            }
        }
        if (sub.size() == 5)
        {
            ctr++;
            sub = "";
        }
        else if (sub.size() == 6)
        {
            sub = "";
            sub += s[i];
            ctr++;
        }
    }
    if (sub.size() > 0)
        ctr++;
    cout << ctr;
}