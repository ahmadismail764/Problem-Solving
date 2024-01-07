#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int grav_box[n];
    for (int i = 0; i < n; i++)
        cin >> grav_box[i];
    sort(grav_box, grav_box + n);
    for (int x : grav_box)
        cout << x << " ";
    cout << '\n';
}