#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countA = count(s.begin(), s.end(), 'A');
        int countB = count(s.begin(), s.end(), 'B');
        char result = (countA > countB) ? 'A' : 'B';
        cout << result << '\n';
    }
}
