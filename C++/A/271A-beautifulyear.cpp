#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    string year = to_string(y);
    while (true)
    {
        y++;
        string next_str = to_string(y);
        if (next_str[0] == next_str[1] || next_str[0] == next_str[2] || next_str[0] == next_str[3])
            continue; // Skip if first digit is repeated
        if (next_str[1] == next_str[2] || next_str[1] == next_str[3])
            continue;
        if (next_str[2] == next_str[3])
            continue;
        cout << y << endl;
        break;
    }
}