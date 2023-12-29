#include <bits/stdc++.h>
using namespace std;

int main()
{
    string password, code;
    map<string, int> binary_codes;
    cin >> password;
    for (int i = 0; i < 10; i++)
    {
        cin >> code;
        binary_codes[code] = i;
    }
    for (int i = 0; i < 80; i += 10)
    {
        string digit = password.substr(i, 10);
        cout << binary_codes[digit];
    }
}