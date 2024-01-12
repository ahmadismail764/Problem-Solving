#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cities(n);
    for (int i = 0; i < n; i++)
        cin >> cities[i];
    cout << cities[1] - cities[0] << ' ' << cities.back() - cities[0] << '\n';
    for (int i = 1; i < n - 1; i++)
    {
        int cost1 = cities.back() - cities[i], cost2 = cities[i] - cities[0];
        int max_cost = max(cost1, cost2);
        cost1 = cities[i] - cities[i - 1], cost2 = cities[i + 1] - cities[i];
        int min_cost = min(cost1, cost2);
        cout << min_cost << ' ' << max_cost << '\n';
    }
    cout << cities.back() - cities[n - 2] << ' ' << cities.back() - cities[0] << '\n';
}
