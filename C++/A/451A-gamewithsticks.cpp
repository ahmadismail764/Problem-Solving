#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << ((min(n, m) % 2 == 1) ? "Akshat" : "Malvika");
}