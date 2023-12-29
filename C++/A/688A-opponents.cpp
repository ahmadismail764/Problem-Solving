#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, ans = 0, cur = 0;
    cin >> n >> d;
    for (int i = 0; i < d; i++)
    {
        string x;
        cin >> x;
        int counter = count(x.begin(), x.end(), '0');
        cur = ((counter == 0) ? 0 : cur + 1);
        ans = max(ans, cur);
    }
    cout << ans;
}