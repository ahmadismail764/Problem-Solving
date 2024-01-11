#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, curr = 0, takencoins = 0;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    sort(coins.begin(), coins.end());
    int target = accumulate(coins.begin(), coins.end(), 0);
    while (curr <= target - curr)
        curr += coins[n - 1 - takencoins++];
    cout << takencoins;
}