#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> usernames;

    while (n--)
    {
        string name;
        cin >> name;

        if (usernames.count(name) == 0)
        {
            usernames[name] = 1;
            cout << "OK\n";
        }
        else
        {
            int num = usernames[name];
            usernames[name] = num + 1;
            cout << name << num << "\n";
        }
    }
}