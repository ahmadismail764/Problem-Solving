#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string pos;
    cin >> n >> pos;
    vector<int> x, X;
    for (int i = 0; i < n; i++)
        (pos[i] == 'x') ? x.push_back(i) : X.push_back(i);
    int c = x.size() - X.size();
    if (c > 0)
        for (int i = 0; i < c / 2; i++)
            pos[x[i]] = 'X';
    else if (c < 0)
        for (int i = 0; i < abs(c / 2); i++)
            pos[X[i]] = 'x';

    cout << abs(c / 2) << '\n'
         << pos;
}