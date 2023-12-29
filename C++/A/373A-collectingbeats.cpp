#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string panels, panels2, panels3, panels4;
    cin >> k >> panels >> panels2 >> panels3 >> panels4;
    panels += panels2 + panels3 + panels4;
    for (char c : "123456789")
    {
        if (count(panels.begin(), panels.end(), c) > (k * 2))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}