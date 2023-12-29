#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    for (int n = 1; n <= 100; n++)
    {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r)
        {
            cout << n;
            return 0;
        }
    }

    for (int n = 11; n <= 100; n += 10)
    {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r)
        {
            cout << n / 10 << endl;
            return 0;
        }
    }
}