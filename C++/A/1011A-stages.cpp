#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
    char last = 'a' - 2;
    int ans = 0, len = 0;
    for (int i = 0; i < n; i++)
        if (s[i] >= last + 2)
        {
            last = s[i];
            ans += s[i] - 'a' + 1;
            len++;
            if (len >= k)
                cout << ans, exit(0);
        }
    cout << -1;
}