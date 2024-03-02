#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string first, second, third;
        cin >> first >> second >> third;
        if (first.find('?') != string::npos)
        {
            if (first.find('A') == string::npos)
                cout << "A\n";
            else if (first.find('B') == string::npos)
                cout << "B\n";
            else
                cout << "C\n";
        }
        else if (second.find('?') != string::npos)
        {
            if (second.find('A') == string::npos)
                cout << "A\n";
            else if (second.find('B') == string::npos)
                cout << "B\n";
            else
                cout << "C\n";
        }
        else
        {
            if (third.find('A') == string::npos)
                cout << "A\n";
            else if (third.find('B') == string::npos)
                cout << "B\n";
            else
                cout << "C\n";
        }
    }
}