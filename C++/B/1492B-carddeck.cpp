#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int end = n;
        for (int i = n; i >= 1; i--)
        {
            int start = pos[i];
            if (end > start)
            {
                for (int j = start; j < end; j++)
                    cout << a[j] << " ";
                end = start;
            }
        }
        cout << "\n";
    }
}