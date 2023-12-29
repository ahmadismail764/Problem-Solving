#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, midpoint;
    cin >> n;
    midpoint = pow(n, 2) / 2;
    vector<int> numbers;
    for (int i = 1; i <= midpoint; i++)
        numbers.push_back(i), numbers.push_back(pow(n, 2) + 1 - i);
    vector<vector<int>> children;
    for (int i = 0; i < n * n; i += n)
    {
        vector<int> group;
        for (int j = i; j < i + n; j++)
            group.push_back(numbers[j]);
        children.push_back(group);
    }
    for (vector<int> child : children)
    {
        for (int x : child)
            cout << x << ' ';
        cout << '\n';
    }
}