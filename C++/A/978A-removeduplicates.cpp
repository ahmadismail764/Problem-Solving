#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    deque<int> final;
    for (int i = n - 1; i >= 0; i--)
    {
        if (find(final.begin(), final.end(), numbers[i]) == final.end())
            final.push_front(numbers[i]);
    }
    cout << final.size() << '\n';
    for (const auto &elem : final)
        cout << elem << ' ';
}