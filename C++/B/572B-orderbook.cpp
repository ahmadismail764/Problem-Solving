#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, depth;
    cin >> n >> depth;
    map<int, int, greater<int>> buy;
    map<int, int> sell;
    char d;
    int price, volume;
    while (n--)
    {
        cin >> d >> price >> volume;
        (d == 'B') ? buy[price] += volume : sell[price] += volume;
    }
    vector<pair<int, int>> buyorders, sellorders;
    for (auto &p : buy)
    {
        buyorders.push_back(p);
        if (buyorders.size() == depth)
            break;
    }
    for (auto &p : sell)
    {
        sellorders.push_back(p);
        if (sellorders.size() == depth)
            break;
    }
    reverse(sellorders.begin(), sellorders.end());
    for (auto &p : sellorders)
        cout << "S " << p.first << ' ' << p.second << '\n';

    for (auto &p : buyorders)
        cout << "B " << p.first << ' ' << p.second << '\n';
}
