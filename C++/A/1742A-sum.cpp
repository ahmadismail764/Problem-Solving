#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<long long> numbers(3);
        for (int i = 0; i < 3; i++)
            cin >> numbers[i];
        sort(numbers.begin(), numbers.end());
        cout << ((numbers[2] == numbers[0] + numbers[1]) ? "YES\n" : "NO\n");
    }
}