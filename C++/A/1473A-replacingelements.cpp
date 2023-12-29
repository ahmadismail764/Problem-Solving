#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> numbers;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            numbers.push_back(num);
        }
        sort(numbers.begin(), numbers.end());
        if (numbers[n - 1] <= d)
        {
            cout << "YES\n";
        }
        else
        {
            int checker = numbers[0] + numbers[1];
            (checker <= d) ? cout << "YES\n" : cout << "NO\n";
        }
    }
}