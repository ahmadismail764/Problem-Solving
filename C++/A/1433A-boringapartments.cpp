#include <bits/stdc++.h>
using namespace std;

int boring[] = {1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int dig = x[0] - '1';
        int len = x.size();
        cout << dig * 10 + len * (len + 1) / 2 << '\n';
    }
}