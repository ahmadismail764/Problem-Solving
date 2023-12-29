#include <bits/stdc++.h>
using namespace std;

bool diffcheck()
{
    int nbElem;
    cin >> nbElem;

    int extSize = nbElem + 2;
    vector<int> orig(extSize), target(extSize);
    vector<int> diff(extSize, 0);

    for (int iElem = 1; iElem <= nbElem; ++iElem)
        cin >> orig[iElem];

    for (int iElem = 1; iElem <= nbElem; ++iElem)
    {
        cin >> target[iElem];
        diff[iElem] = target[iElem] - orig[iElem];
    }

    int cntModif = 0;
    for (int iElem = 0; iElem < extSize - 1; ++iElem)
    {
        if (diff[iElem] < 0)
            return false;
        if (diff[iElem] != diff[iElem + 1])
            ++cntModif;
    }
    return (cntModif <= 2);
}

int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        cout << ((diffcheck()) ? "YES\n" : "NO\n");
    }
}