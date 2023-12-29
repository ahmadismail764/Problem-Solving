#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double vasiliy1, vasiliy2, n, taxi_x, taxi_y, taxi_v;
    cin >> vasiliy1 >> vasiliy2;
    cin >> n;
    priority_queue<long double, vector<long double>, greater<long double>> times;
    while (n--)
    {
        cin >> taxi_x >> taxi_y >> taxi_v;
        long double d = hypot(taxi_x - vasiliy1, taxi_y - vasiliy2);
        times.push(d / taxi_v);
    }
    cout << fixed << setprecision(20) << times.top();
}