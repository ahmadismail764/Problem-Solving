#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string row;
    cin >> row;
    vector<int> groups;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (row[i] == 'B')
            count++;
        if (row[i] == 'W' || i == n - 1)
        {
            if (count > 0)
                groups.push_back(count);
            count = 0;
        }
    }
    cout << groups.size() << '\n';
    for (int i : groups)
        cout << i << " ";
}
