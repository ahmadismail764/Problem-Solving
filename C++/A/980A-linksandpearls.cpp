#include <bits/stdc++.h>
using namespace std;

int main()
{
    string necklace;
    cin >> necklace;
    int pearls = count(necklace.begin(), necklace.end(), 'o');
    int links = count(necklace.begin(), necklace.end(), '-');
    if (links == 0 || pearls == 0)
        cout << "YES\n";
    else
        cout << ((links % pearls) ? "NO\n" : "YES\n");
}