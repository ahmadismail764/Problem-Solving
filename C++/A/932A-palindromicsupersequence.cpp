#include <bits/stdc++.h>
using namespace std;
bool palindrome_checker(string s)
{
    if (s.length() % 2 == 0)
    {
        string str1 = s.substr(0, s.length() / 2);
        string str2 = s.substr(s.length() / 2);
        reverse(str2.begin(), str2.end());
        return str1 == str2;
    }
    else
    {
        string str1 = s.substr(0, s.length() / 2);
        string str2 = s.substr(s.length() / 2 + 1);
        reverse(str2.begin(), str2.end());
        return str1 == str2;
    }
}
int main()
{
    string sequence;
    cin >> sequence;
    if (palindrome_checker(sequence))
        cout << sequence;
    else
    {
        string reversed = sequence;
        reverse(sequence.begin(), sequence.end());
        cout << sequence << reversed;
    }
}