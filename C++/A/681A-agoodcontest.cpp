#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool perform_good = 0;
    while (n--)
    {
        string handle;
        int before, after;
        cin >> handle >> before >> after;
        if (before >= 2400 && after > before)
        {
            perform_good = true;
            break;
        }
    }
    cout << ((perform_good) ? "YES" : "NO");
}