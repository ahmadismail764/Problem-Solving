#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, x;
    cin >> n >> s;
    vector<int> mugs;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mugs.push_back(x);
    }
    int sum = accumulate(mugs.begin(), mugs.end(), 0);
    int maximum = *(max_element(mugs.begin(), mugs.end()));
    cout << ((sum - maximum <= s) ? "YES" : "NO");
}