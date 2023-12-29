#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int first = s * v1 + 2 * t1;
    int second = s * v2 + 2 * t2;
    if (first < second)
        cout << "First";
    else if (first > second)
        cout << "Second";
    else
        cout << "Friendship";
}