#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> factors;
    // Trial division with generated primes
    for (int p = 2; p * p <= n; ++p)
    {
        while (n % p == 0)
        {
            factors.push_back(p);
            n /= p;
        }
    }
    // If n is a prime greater than 2
    if (n > 2)
    {
        factors.push_back(n);
    }
    return factors;
}

int countDistinctK(int a, int b, int l)
{
    vector<int> factors = primeFactors(l);
    unordered_set<int> distinctK;

    for (int factor : factors)
    {
        int maxPowerA = 0;
        while (l % factor == 0)
        {
            l /= factor;
            maxPowerA++;
        }
        int maxPowerB = 0;
        int tempB = b;
        while (tempB % factor == 0)
        {
            tempB /= factor;
            maxPowerB++;
        }
        for (int powerA = 0; powerA <= maxPowerA; ++powerA)
        {
            for (int powerB = 0; powerB <= maxPowerB; ++powerB)
            {
                int k = l;
                for (int i = 0; i < powerA; ++i)
                {
                    k /= a;
                }
                for (int i = 0; i < powerB; ++i)
                {
                    k /= b;
                }
                if (k > 0 && l == k * pow(a, powerA) * pow(b, powerB))
                {
                    distinctK.insert(k);
                }
            }
        }
    }

    return distinctK.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        cout << countDistinctK(a, b, l) << '\n';
    }
}
