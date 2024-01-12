#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> holds(n), differences;
    multimap<int, int> index_to_difference;
    for (int i = 0; i < n; i++)
        cin >> holds[i];

    for (int i = 1; i < n - 1; i++)
        index_to_difference.insert(make_pair(holds[i + 1] - holds[i - 1], i));
    holds.erase(holds.begin() + index_to_difference.begin()->second);

    for (int i = 1; i < n - 1; i++)
        differences.push_back(holds[i] - holds[i - 1]);
    cout << *max_element(differences.begin(), differences.end());
}