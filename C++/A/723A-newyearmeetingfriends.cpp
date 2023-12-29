#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> spots(3);
    for (int i = 0; i < 3; i++)
        cin >> spots[i];
    sort(spots.begin(), spots.end());
    cout << (spots[1] - spots[0]) + (spots[2] - spots[1]);
}