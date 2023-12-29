#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int count_1 = 0, count_2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            (x == 1) ? count_1++ : count_2++;
        }
        if (sum % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        if (count_1 == 0 && count_2 % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}