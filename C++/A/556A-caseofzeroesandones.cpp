#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    cout << n - (2 * min(count(s.begin(), s.end(), '0'), count(s.begin(), s.end(), '1')));
}