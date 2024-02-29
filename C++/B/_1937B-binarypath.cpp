#include <bits/stdc++.h>
using namespace std;

pair<string, int> solve(string grid[2], int n)
{
    map<string, int> paths;
    for (int i = 0; i < n; i++)
    {
        string x = grid[0].substr(0, i + 1) + grid[1].substr(i, n - i);
        paths[x]++;
    }
    return *paths.begin();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string grid[2];
        cin >> n >> grid[0] >> grid[1];
        cout << solve(grid, n).first << '\n'
             << solve(grid, n).second << '\n';
    }
}
