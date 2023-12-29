#include <bits/stdc++.h>
using namespace std;

void compress_songs(const vector<int> &a, const vector<int> &b, int n, int m)
{
    vector<int> diff(n);
    for (int i = 0; i < n; i++)
        diff[i] = b[i] - a[i];
    auto total = accumulate(a.begin(), a.end(), 0LL);

    if (total <= m)
        cout << 0 << endl;
    else
    {
        sort(diff.begin(), diff.end());
        int i = 0;
        while (total > m && i < n)
            total += diff[i], ++i;
        cout << (total <= m ? i : -1) << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> songs(n);
    vector<int> compressed(n);
    for (int i = 0; i < n; i++)
        cin >> songs[i] >> compressed[i];
    compress_songs(songs, compressed, n, m);
}
