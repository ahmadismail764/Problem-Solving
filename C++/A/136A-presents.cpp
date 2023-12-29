#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> gifts(n);
    for (int i = 0; i < n; i++)
        cin >> gifts[i];

    vector<int> givers(n);
    for (int i = 0; i < n; i++)
        givers[gifts[i] - 1] = i + 1;

    for (int i = 0; i < n; i++)
        cout << givers[i] << " ";
}