#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p;
    bool can_pass[n + 1];
    memset(can_pass, false, sizeof(can_pass));
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        can_pass[level] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        can_pass[level] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!can_pass[i])
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}