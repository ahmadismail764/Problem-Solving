#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x - !(x % 2));
    }
    for (const auto &item : numbers)
        cout << item << ' ';
}