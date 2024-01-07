#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, curr_max, curr_min, amazing = 0;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
        (i == 0) ? curr_max = scores[i], curr_min = scores[i] : 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > curr_max)
        {
            curr_max = scores[i];
            amazing++;
        }
        else if (scores[i] < curr_min)
        {
            curr_min = scores[i];
            amazing++;
        }
    }
    cout << amazing;
}