#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int badDays = 0;
        int minPrice = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
            (a[i] > minPrice) ? badDays++ : minPrice = a[i];
        cout << badDays << endl;
    }
}