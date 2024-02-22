#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt[200005] = {0};
    long long sum = 0;
    for (int i = 1; i <= 200000; i++)
    {
        string s = to_string(i);
        for (int j = 0; j < s.size(); j++)
            sum += s[j] - 48;
        cnt[i] = sum;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt[n] << '\n';
    }
}
