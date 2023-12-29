#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> directions(n);
    for (int i = 0; i < n; i++)
    {
        cin >> directions[i];
    }

    vector<int> positions(n);
    for (int i = 0; i < n; i++)
    {
        cin >> positions[i];
    }

    int min_time = numeric_limits<int>::max();

    for (int i = 0; i < n - 1; i++)
    {
        if (directions[i] == 'R' && directions[i + 1] == 'L')
        {
            int time = (positions[i + 1] - positions[i]) / 2;
            min_time = min(min_time, time);
        }
    }
    (min_time == numeric_limits<int>::max()) ? cout << -1 : cout << min_time;
}