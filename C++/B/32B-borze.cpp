#include <bits/stdc++.h>
using namespace std;

int main()
{
    string borze_code;
    cin >> borze_code;

    string ternary_number = "";
    for (int i = 0; i < borze_code.length(); i++)
    {
        if (borze_code[i] == '.')
            ternary_number += '0';
        else if (borze_code[i] == '-' && borze_code[i + 1] == '.')
        {
            ternary_number += '1';
            i++;
        }
        else if (borze_code[i] == '-' && borze_code[i + 1] == '-')
        {
            ternary_number += '2';
            i++;
        }
    }
    cout << ternary_number;
}