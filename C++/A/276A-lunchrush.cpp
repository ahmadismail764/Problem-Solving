#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, f, t;
    cin >> n >> k;
    priority_queue<int> joys;
    while (n--)
    {
        cin >> f >> t;
        (t > k) ? joys.push(f - (t - k)) : joys.push(f);
    }
    cout << joys.top();
}