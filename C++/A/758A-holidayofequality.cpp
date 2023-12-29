#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_a = *max_element(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += max_a - a[i];
    cout << sum;
}