#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, stairways;
    cin >> n;
    vector<int> stairs(n), stairway_sizes;
    for (int i = 0; i < n; i++)
        cin >> stairs[i];
    for (int i = 0; i < n; i++)
    {
        if (stairs[i] == 1)
        {
            stairways++;
        }
        if (i > 0 && stairs[i] == 1)
        {
            stairway_sizes.push_back(stairs[i - 1]);
        }
    }
    stairway_sizes.push_back(stairs[n - 1]);
    cout << stairways << endl;
    for (int i : stairway_sizes)
    {
        cout << i << " ";
    }
}