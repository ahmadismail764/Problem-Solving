#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string comparator = "Timur";
        sort(comparator.begin(), comparator.end());
        string name;
        int x;
        cin >> x;
        cin >> name;
        if (x != 5)
            cout << "NO\n";
        else
        {
            sort(name.begin(), name.end());
            cout << ((name == comparator) ? "YES\n" : "NO\n");
        }
    }
}