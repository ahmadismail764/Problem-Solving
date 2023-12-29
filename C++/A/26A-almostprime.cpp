#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, amount = 0, pfactors[3001] = {0};
    cin >> n;
    bool b[3001] = {false};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
            for (int j = i * 2; j <= n; j += i)
            {
                b[j] = true;
                pfactors[j]++;
            }
        (pfactors[i] == 2) ? amount++ : 0;
    }
    cout << amount;
}
