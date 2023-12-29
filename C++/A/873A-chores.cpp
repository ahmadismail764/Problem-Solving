#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, x, mintime = 0;
    cin >> n >> k >> x;
    int chore_time[n];
    for (int i = 0; i < n; i++)
        cin >> chore_time[i];
    sort(chore_time, chore_time + n);
    int i = n - 1;
    while (k > 0 && i >= 0)
    {
        chore_time[i] = x;
        i--;
        k--;
    }
    for (int i = 0; i < n; i++)
        mintime += chore_time[i];
    cout << mintime;
}