#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> lengths(4);
    for (int i = 0; i < 4; i++)
        cin >> lengths[i];
    sort(lengths.begin(), lengths.end());
    int vec_sum = accumulate(lengths.begin(), lengths.end(), 0);
    if ((vec_sum - lengths[0]) > 2 * lengths[3] || (vec_sum - lengths[3]) > 2 * lengths[2])
        cout << "TRIANGLE";
    else if (vec_sum - lengths[0] == 2 * lengths[3] || (vec_sum - lengths[3]) == 2 * lengths[2])
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
}