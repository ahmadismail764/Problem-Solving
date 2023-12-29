#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> y(n);
    for (int i = 0; i < n; i++)
        cin >> y[i];

    sort(y.begin(), y.end());

    int teams = 0;
    for (int i = n - 1; i >= 2; i--)
    {
        if (y[i] + k <= 5 && y[i - 1] + k <= 5 && y[i - 2] + k <= 5)
        {
            teams++;
            i -= 2;
        }
    }

    cout << teams;
}