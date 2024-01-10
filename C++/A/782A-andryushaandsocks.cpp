#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxSocksOnTable = 0;
    unordered_set<int> pairsOnTable;
    cin >> n;
    for (int i = 0; i < (2 * n); ++i)
    {
        int x;
        cin >> x;
        if (pairsOnTable.find(x) != pairsOnTable.end())
            pairsOnTable.erase(x);
        else
        {
            pairsOnTable.insert(x);
            maxSocksOnTable = max(maxSocksOnTable, static_cast<int>(pairsOnTable.size()));
        }
    }
    cout << maxSocksOnTable;
}
