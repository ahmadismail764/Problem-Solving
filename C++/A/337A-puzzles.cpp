#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> pieces(m);
    for (int i = 0; i < m; i++)
        cin >> pieces[i];
    sort(pieces.begin(), pieces.end());
    int min_diff = pieces[n - 1] - pieces[0];
    for (int i = 1; i <= m - n; i++)
    {
        int diff = pieces[i + n - 1] - pieces[i];
        (diff < min_diff) ? min_diff = diff : 0;
    }
    cout << min_diff;
}