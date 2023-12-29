#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned n, already, capacity, available = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> already >> capacity;
        (capacity - already >= 2) ? available++ : 0;
    }
    cout << available;
}