#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s, ans;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i += k)
        ans += s[i];
    for (int i = 0; i < k - 1 && ans.size() < s.size(); i++)
        ans += ans;
    string compare = ans;
    sort(compare.begin(), compare.end());
    cout << ((compare == s) ? ans : "-1");
}
