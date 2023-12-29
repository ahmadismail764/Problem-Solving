#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, k, total_distance = 0;
    cin >> n >> k;
    vector<pair<long double, long double>> points(n);
    for (int i = 0; i < n; i++)
        cin >> points[i].first >> points[i].second;
    for (int i = 1; i < n; i++)
        total_distance += hypot(points[i].first - points[i - 1].first, points[i].second - points[i - 1].second);
    cout << fixed << setprecision(9) << total_distance * k / 50;
}