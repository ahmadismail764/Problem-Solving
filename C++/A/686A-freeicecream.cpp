#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, d;
    cin >> n >> x;
    long long stock = x, distress = 0;
    char transaction;
    while (n--)
    {
        cin >> transaction >> d;
        if (transaction == '+')
            stock += d;
        else
        {
            (stock >= d) ? stock -= d : distress++;
        }
    }
    cout << stock << ' ' << distress;
}