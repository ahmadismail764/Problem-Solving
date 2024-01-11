#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m;

    cin >> n;
    vector<double> pedal(n);
    for (int i = 0; i < n; i++)
        cin >> pedal[i];

    cin >> m;
    vector<double> rear_wheel(m);
    for (int i = 0; i < m; i++)
        cin >> rear_wheel[i];

    vector<int> final;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            double ratio = rear_wheel[j] / pedal[i];
            if (ratio == floor(ratio))
                final.push_back(ratio);
        }
    }
    cout << count(final.begin(), final.end(), *max_element(final.begin(), final.end()));
}