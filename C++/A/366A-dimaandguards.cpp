#include <bits/stdc++.h>
using namespace std;

vector<int> can_pass_guardpost(int budget, array<int, 4> prices)
{
    vector<pair<int, int>> combinations = {{prices[0], prices[2]}, {prices[0], prices[3]}, {prices[1], prices[2]}, {prices[1], prices[3]}};
    for (const auto &item : combinations)
        if (item.first + item.second <= budget)
            return {item.first, budget - item.first};

    return {-1};
}

vector<int> sneak_in_inna2(int budget, array<array<int, 4>, 4> guardposts)
{
    for (int i : {0, 1, 2, 3})
    {
        vector<int> result = can_pass_guardpost(budget, guardposts[i]);
        if (result[0] != -1)
            return {i + 1, result[0], result[1]};
    }

    return {-1};
}

int main()
{
    int budget;
    cin >> budget;

    array<array<int, 4>, 4> guardposts;
    for (int i : {0, 1, 2, 3})
        for (int j : {0, 1, 2, 3})
            cin >> guardposts[i][j];

    vector<int> result2 = sneak_in_inna2(budget, guardposts);
    if (result2[0] != -1)
        for (int value : result2)
            cout << value << " ";
    else
        cout << -1;
}
