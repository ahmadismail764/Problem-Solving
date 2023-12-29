#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> negatives, positives, zeros;

    for (int i = 0; i < n; ++i)
    {
        int x;
        std::cin >> x;
        if (x < 0)
            negatives.push_back(x);
        else if (x > 0)
            positives.push_back(x);
        else
            zeros.push_back(x);
    }

    if (negatives.size() % 2 == 0)
        zeros.push_back(negatives.back()), negatives.pop_back();

    if (positives.empty())
    {
        positives.push_back(negatives.back());
        negatives.pop_back();
        positives.push_back(negatives.back());
        negatives.pop_back();
    }
    cout << negatives.size();
    for (int x : negatives)
        cout << ' ' << x;
    cout << '\n';

    cout << positives.size();
    for (int x : positives)
        cout << ' ' << x;

    cout << '\n';

    cout << zeros.size();
    for (int x : zeros)
        cout << ' ' << x;
    cout << '\n';
}