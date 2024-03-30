#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    vector<int> count(5, 0);
    cin >> n;
    while (n--)
    {
        cin >> s;
        count[s] += 1;
    }
    int total_taxis = (count[4] + count[3]) + (count[2] / 2);
    count[1] -= count[3];
    (count[2] % 2 == 1) ? total_taxis += 1, count[1] -= 2 : 0;
    (count[1] > 0) ? total_taxis += (count[1] + 3) / 4 : 0;
    cout << total_taxis;
}
