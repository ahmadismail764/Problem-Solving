#include <bits/stdc++.h>
using namespace std;

bool is_magical(string number)
{
    for (int i = 0; i < (int)number.size(); i++)
        if (number[i] != '1' && number[i] != '4')
            return false;

    if (number[0] == '4' || number.find("444") != number.npos)
        return false;
    return true;
}

int main()
{
    string number;
    cin >> number;
    cout << ((is_magical(number)) ? "YES" : "NO");
}