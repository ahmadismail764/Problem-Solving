#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> numbers(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        cout << ((numbers[2] + numbers[1] >= 10) ? "YES\n" : "NO\n");
    }
}