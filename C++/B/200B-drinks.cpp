#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n;
    cin >> n;
    vector<int> percentages(n);
    for (int i = 0; i < n; i++)
        cin >> percentages[i];
    long double sum = accumulate(percentages.begin(), percentages.end(), 0);
    cout << setprecision(17) << sum / n;
}