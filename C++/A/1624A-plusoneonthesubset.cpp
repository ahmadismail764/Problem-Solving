#include <iostream>
#include <algorithm>

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
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int MIN = *min_element(a, a + n);
        int MAX = *max_element(a, a + n);
        cout << MAX - MIN << '\n';
    }
}