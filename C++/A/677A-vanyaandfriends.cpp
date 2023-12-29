#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, roadwidth;
    cin >> n >> h;
    roadwidth = n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        (heights[i] > h) ? roadwidth++ : 0;
    }
    cout << roadwidth;
}