#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        unordered_set<int> bottomtrains;
        while (n--)
        {
            cin >> x;
            bottomtrains.insert(x);
        }
        int removed = 0;
        while (m--)
        {
            cin >> x;
            (bottomtrains.find(x) != bottomtrains.end()) ? ++removed : 0;
        }
        cout << removed << '\n';
    }
}