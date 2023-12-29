#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long level = s.find('^'), left = 0, right = 0;
    for (int k = 0; k < level; k++)
        left += ((s[k] != '=') ? (level - k) * (s[k] - '0') : 0);
    for (int k = level + 1; k < s.size(); k++)
        right += ((s[k] != '=') ? (k - level) * (s[k] - '0') : 0);
    if (left == right)
        cout << "balance";
    else if (left > right)
        cout << "left";
    else
        cout << "right";
}