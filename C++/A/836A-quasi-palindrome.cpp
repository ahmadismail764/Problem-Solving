#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string m = n;
    reverse(n.begin(), n.end());
    if (n == m)
    {
        cout << "Yes\n";
        return 0;
    }
    int count = count_if(m.begin(), m.end(), [](char c)
                         { return c == '0'; });
    m = string(count, '0') + m;
    (m == string(m.rbegin(), m.rend())) ? cout << "Yes\n" : cout << "No\n";
}