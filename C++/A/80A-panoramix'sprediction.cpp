#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool is_next_prime = false;
    for (int i = a + 1; i <= b; i++)
    {
        if (is_prime(i))
        {
            if (i == b)
                is_next_prime = true;
            break;
        }
    }
    cout << ((is_prime(a) && is_next_prime) ? "YES" : "NO");
}