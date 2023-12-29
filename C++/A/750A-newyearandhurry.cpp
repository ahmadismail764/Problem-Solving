#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int totalTime = k;
    int maxProblems = 0;
    for (int i = 1; i <= n; i++)
    {
        totalTime += (5 * i);
        if (totalTime > 240)
            break;
        maxProblems = i;
    }
    cout << maxProblems;
}