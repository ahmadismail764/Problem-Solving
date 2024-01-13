#include <bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long n;
    long long sum = 0;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    sort(a.begin(), a.end());
    if (sum % 2)
    {
        for (long long i = 0; i < n; i++)
        {

            if (a[i] % 2 != 0)
            {
                cout << sum - a[i];
                break;
            }
        }
    }
    else
        cout << sum;
}
