#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, i = 0, curr_sum = 0;
    cin >> k;
    vector<int> months(12);
    for (int i = 0; i < 12; i++)
        cin >> months[i];
    if (k > accumulate(months.begin(), months.end(), 0))
        cout << -1;
    else
    {
        sort(months.rbegin(), months.rend());
        while (curr_sum < k)
            curr_sum += months[i++];
        cout << i;
    }
}