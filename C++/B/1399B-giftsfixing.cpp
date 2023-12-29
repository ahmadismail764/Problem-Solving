#include <iostream>
#include <vector>
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());

        long long ans = 0;
        for (int i = 0; i < n; i++)
            ans += max(a[i] - min_a, b[i] - min_b);

        cout << ans << endl;
    }
}