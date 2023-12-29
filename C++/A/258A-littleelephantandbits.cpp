#include <bits/stdc++.h>
using namespace std;

int main()
{
    string bin;
    cin >> bin;
    bool zero_found = false;
    for (int i = 1; i < bin.size(); i++)
    {
        if (bin[i] == '0')
        {
            bin.erase(i, 1);
            zero_found = true;
            break;
        }
    }
    if (!zero_found)
        bin.erase(bin.size() - 1, 1);
    cout << bin;
}