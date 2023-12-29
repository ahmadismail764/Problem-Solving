#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;

    while (t--)
    {
        priority_queue<int> pq;
        cin >> a >> b >> c;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        pq.pop();
        cout << pq.top() << '\n';
    }
}