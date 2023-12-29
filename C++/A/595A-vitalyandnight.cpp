#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, answer = 0;
    cin >> n >> m;
    vector<vector<int>> floors;
    for (int i = 0; i < n; i++)
    {
        vector<int> floor;
        for (int j = 0; j < 2 * m; j++)
        {
            char x;
            cin >> x;
            floor.push_back(x);
        }
        floors.push_back(floor);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2 * m; j += 2)
            answer += ((floors[i][j] == '1' || floors[i][j + 1] == '1') ? 1 : 0);
    cout << answer;
}