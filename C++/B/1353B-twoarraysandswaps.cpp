#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 30;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int a[MAXN], b[MAXN];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (int i = 0; i < n && k > 0; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
                k--;
            }
            else
                break;
        }
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }
}
