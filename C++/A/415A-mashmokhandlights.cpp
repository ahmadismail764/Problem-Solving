#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<bool> lights(n, true);
    vector<int> whoturnedoff(n, 0), pressed;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        pressed.push_back(x);
    }
    for (const auto &x : pressed)
    {
        for (int i = x - 1; i < n; i++)
        {
            if (lights[i])
            {
                lights[i] = false;
                whoturnedoff[i] = x;
            }
            else
                break;
        }
    }
    for (int elem : whoturnedoff)
        cout << elem << ' ';
}