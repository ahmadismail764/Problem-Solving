#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int denoms[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> denoms[i];
        (denoms[i] == 1) ? flag = true : 0;
    }
    cout << ((flag) ? -1 : 1);
}