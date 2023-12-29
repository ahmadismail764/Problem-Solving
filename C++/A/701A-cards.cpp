#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
        cin >> cards[i];
    int sum = accumulate(cards.begin(), cards.end(), 0);
    int target = 2 * sum / n;
    set<int> pair_indeces;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cards[i] + cards[j] == target && pair_indeces.find(i + 1) == pair_indeces.end() && pair_indeces.find(j + 1) == pair_indeces.end())
            {
                pair_indeces.insert(i + 1);
                pair_indeces.insert(j + 1);
                cout << i + 1 << " " << j + 1 << '\n';
                break;
            }
        }
    }
}