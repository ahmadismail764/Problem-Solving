#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char largest = str[0];
    for (char c : str)
        largest = ((c > largest) ? c : largest);
    for (int i = 0; i < count(str.begin(), str.end(), largest); i++)
        cout << largest;
}