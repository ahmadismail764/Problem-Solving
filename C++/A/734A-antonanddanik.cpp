#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, anton = 0, danik = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        (s[i] == 'A' || s[i] == 'a') ? anton++ : 0;
        (s[i] == 'D' || s[i] == 'd') ? danik++ : 0;
    }
    if (anton > danik)
        cout << "Anton";
    else if (danik > anton)
        cout << "Danik";
    else if (danik == anton)
        cout << "Friendship";
}