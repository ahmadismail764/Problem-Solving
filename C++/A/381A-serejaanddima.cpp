#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sereja_score = 0, dima_score = 0;
    int left = 0, right = n - 1;
    bool sereja_turn = true;
    while (left <= right)
    {
        int chosen_card;
        if (a[left] >= a[right])
        {
            chosen_card = a[left];
            left++;
        }
        else
        {
            chosen_card = a[right];
            right--;
        }

        (sereja_turn) ? sereja_score += chosen_card : dima_score += chosen_card;

        sereja_turn ^= 1;
    }
    cout << sereja_score << " " << dima_score;
}