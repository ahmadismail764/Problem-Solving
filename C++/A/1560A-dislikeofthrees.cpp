#include <bits/stdc++.h>
using namespace std;

bool is_disliked(int n)
{
    return n % 3 == 0 || n % 10 == 3;
}

int main()
{
    int t, k;
    cin >> t;
    vector<int> sequence;
    for (int i = 1; sequence.size() < 1000; i++)
    {
        if (!is_disliked(i))
            sequence.push_back(i);
    }
    while (t--)
    {
        cin >> k;
        cout << sequence[k - 1] << '\n';
    }
}