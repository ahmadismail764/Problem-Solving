#include <bits/stdc++.h>
using namespace std;
int main()
{
    string first, second;
    1 <= first.length() <= 100;
    1 <= second.length() <= 100;
    cin >> first >> second;
    transform(first.begin(), first.end(), first.begin(), [](unsigned char c)
              { return tolower(c); });
    string x = first;
    transform(second.begin(), second.end(), second.begin(), [](unsigned char c)
              { return tolower(c); });
    string y = second;
    if (x == y)
        cout << 0;
    else if (first < second)
        cout << -1;
    else
        cout << 1;
}