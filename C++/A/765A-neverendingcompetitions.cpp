#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int n;
    string home, a, b;
    set<string> s;
    cin >> n >> home;
    while (n--)
    {
        cin >> a;
        b = ((a.substr(0, 3) == home) ? a.substr(5, 3) : a.substr(0, 3));
        if (s.find(b) == s.end())
            s.insert(b);
        else
            s.erase(b);
    }
    cout << ((s.empty()) ? "home" : "contest");
}
