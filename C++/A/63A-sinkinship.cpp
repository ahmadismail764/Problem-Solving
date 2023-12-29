#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, j, k, n;
    string name, type, captain;
    vector<string> women, men, rats;

    cin >> n;
    while (n--)
    {
        cin >> name >> type;
        if (type == "captain")
            captain = name;
        else if (type == "rat")
            rats.push_back(name + '\n');
        else if (type == "woman" || type == "child")
            women.push_back(name + '\n');
        else if (type == "man")
            men.push_back(name + '\n');
    }

    for (string rat : rats)
        cout << rat;
    for (string woman : women)
        cout << woman;
    for (string man : men)
        cout << man;

    cout << captain;
}