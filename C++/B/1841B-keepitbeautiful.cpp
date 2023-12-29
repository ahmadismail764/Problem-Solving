#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<int> a;
        int cnt = 0;
        while (q--)
        {
            int x;
            cin >> x;
            int nw_cnt = cnt + (a.size() > 0 && a.back() > x);
            if (nw_cnt == 0 || (nw_cnt == 1 && x <= a.front()))
            {
                a.push_back(x);
                cnt = nw_cnt;
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << '\n';
    }
}