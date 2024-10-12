#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        map<int, int> counter_a, counter_b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            counter_a[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            counter_b[x]++;
        }
        long long answer = 0;
        for (auto it = counter_a.begin(); it != counter_a.end(); it++)
        {
            int key = it->first, value = it->second;
            if (counter_b.find(key) != counter_b.end())
                answer += min(value, counter_b[key]);
        }
        cout << answer << '\n';
    }
}