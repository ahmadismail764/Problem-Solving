#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1, n, solvable = 0, agreement = 0;
    array<int, 3> problems;
    cin >> n;
    while (i <= n)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> problems[i];
            (problems[i]) ? agreement += 1 : 0;
        }
        (agreement > 1) ? solvable += 1 : 0;
        agreement = 0;
        i++;
    }
    cout << solvable;
}
