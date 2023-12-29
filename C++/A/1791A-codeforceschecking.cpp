#include <iostream>
#include <string>
using namespace std;

bool isPresent(char c)
{
    string s = "codeforces";
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            return true;
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        cin >> c;
        cout << ((isPresent(tolower(c))) ? "YES" : "NO") << endl;
    }
}