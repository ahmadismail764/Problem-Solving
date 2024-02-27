#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            sum += numbers[i];
        }
        if (sum % 3 == 0)
            cout << 0 << '\n';
        else if (sum % 3 == 2)
            cout << 1 << '\n';
        else
        {
            auto it = find_if(numbers.begin(), numbers.end(), [](int i)
                              { return i % 3 == 1; });
            cout << ((it != numbers.end()) ? 1 : 2) << '\n';
        }
    }
}