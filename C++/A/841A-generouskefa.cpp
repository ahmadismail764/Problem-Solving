#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m;
    string s;
    cin >> n >> k >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] > k)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}