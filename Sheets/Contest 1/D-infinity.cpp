#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n;
    vector<pair<long long, long long>> signs_and_as;
    for (int i = 0; i < n; i++)
    {
        long long sign, a;
        cin >> sign >> a;
        signs_and_as.push_back(make_pair(sign, a));
    }
    cin >> m;
    vector<long long> array_x(m);
    for (long long i = 0; i < m; i++)
        cin >> array_x[i];

    for (long long i = 0; i < m; i++)
    {
        long long sum = 0;
        for (int j = 0; j < n; j++)
            sum += ((signs_and_as[j].first * array_x[i]) - signs_and_as[j].second >= 0);
        cout << sum << '\n';
    }
}