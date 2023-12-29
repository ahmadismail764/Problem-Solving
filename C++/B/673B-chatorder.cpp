#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    unordered_set<string> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.find(v[i]) == s.end())
        {
            cout << v[i] << '\n';
            s.insert(v[i]);
        }
    }
}
