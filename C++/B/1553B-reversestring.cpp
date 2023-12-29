#include <iostream>
#include <algorithm>
using namespace std;

bool canobtain(string s, string t)
{
    for (int i = 1; i <= s.length(); ++i)
    {
        string sl = s.substr(0, i);

        string sr = s.substr(0, i - 1);

        reverse(sr.begin(), sr.end());

        string S = sl + sr;
        if (S.find(t) != string::npos)
            return true;
    }
    return false;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string orig, modified;
        cin >> orig >> modified;
        (canobtain(orig, modified)) ? cout << "YES\n" : cout << "NO\n";
    }
}