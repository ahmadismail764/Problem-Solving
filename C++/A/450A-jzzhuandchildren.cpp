#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    deque<int> line, finished;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i - 1];
        line.push_back(i);
    }
    while (!line.empty())
    {
        int child = line.front();
        line.pop_front();
        int candies = min(m, a[child - 1]);
        a[child - 1] -= candies;
        (a[child - 1] > 0) ? line.push_back(child) : finished.push_back(child);
    }
    cout << finished.back();
}