#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> good_cars;
    vector<vector<int>> cars;
    for (int i = 0; i < n; i++)
    {
        vector<int> row(n);
        for (int j = 0; j < n; j++)
            cin >> row[j];
        cars.push_back(row);
    }
    for (int i = 0; i < n; i++)
    {
        if (find(cars[i].begin(), cars[i].end(), 1) == cars[i].end() && find(cars[i].begin(), cars[i].end(), 3) == cars[i].end())
            good_cars.push_back(i + 1);
    }

    cout << good_cars.size() << '\n';
    if (good_cars.size() > 0)
        for (const auto &good_car : good_cars)
            cout << good_car << ' ';
}