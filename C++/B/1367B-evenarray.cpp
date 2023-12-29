#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            (a[i] % 2 == 0) ? even_count++ : odd_count++;
        }
        if (even_count != odd_count && even_count != odd_count + 1)
            cout << -1 << '\n';
        else
        {
            int moves = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 != a[i] % 2)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (i % 2 != j % 2 && a[j] % 2 != j % 2)
                        {
                            swap(a[i], a[j]);
                            moves++;
                            break;
                        }
                    }
                }
            }
            cout << moves << '\n';
        }
    }
}