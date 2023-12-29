#include <bits/stdc++.h>
using namespace std;

string xor_binary_strings(string s1, string s2)
{
    string result = "";
    int n = s1.length();

    for (int i = 0; i < n; i++)
    {
        int bit1 = s1[i] - '0';
        int bit2 = s2[i] - '0';
        int xor_bit = bit1 ^ bit2;
        result += to_string(xor_bit);
    }
    return result;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string result = xor_binary_strings(s1, s2);
    cout << result;
}