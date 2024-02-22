#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> grid(n, vector<char>(n));
        int minRow = n, maxRow = -1, minCol = n, maxCol = -1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> grid[i][j];
                if (grid[i][j] == '1')
                {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }
        cout << ((maxRow - minRow == maxCol - minCol) ? "SQUARE\n" : "TRIANGLE\n");
    }
}
