#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> faces(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        faces[i] = make_pair(a, b);
    }
    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        int a = faces[i].first, b = faces[i].second;
        if (a == x || b == x || a == 7 - x || b == 7 - x)
        {
            possible = false;
            break;
        }
        if (i == n - 1)
            x = 7 - max(a, b);
    }
    (possible) ? cout << "YES" : cout << "NO";
}