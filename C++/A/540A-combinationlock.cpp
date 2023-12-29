#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, moves = 0;
    string before, after;
    cin >> n >> before >> after;
    for (int i = 0; i < n; i++)
    {
        int x = abs(before[i] - after[i]);
        moves += min(x, 10 - x);
    }
    cout << moves;
}