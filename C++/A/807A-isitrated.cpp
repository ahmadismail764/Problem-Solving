#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> results;
    for (int i = 0; i < n; i++)
    {
        vector<int> r(2);
        cin >> r[0] >> r[1];
        results.push_back(r);
    }

    for (auto r : results)
    {
        if (r[0] != r[1])
        {
            cout << "rated";
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (results[i][0] > results[j][0])
            {
                cout << "unrated";
                return 0;
            }
        }
    }
    cout << "maybe";
}
