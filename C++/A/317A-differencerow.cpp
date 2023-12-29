#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());

    cout << a[0] << " ";
    for (int i = n - 2; i >= 1; i--)
        cout << a[i] << " ";
    cout << a[n - 1] << '\n';
}