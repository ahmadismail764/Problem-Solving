#include <bits/stdc++.h>
using namespace std;

long long countSameDigits(long long n)
{
    long long count = 0;
    for (int digit = 1; digit <= 9; digit++)
    {
        long long num = digit;
        while (num <= n)
            count++, num = num * 10 + digit;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long count = countSameDigits(n);
        cout << count << endl;
    }
}