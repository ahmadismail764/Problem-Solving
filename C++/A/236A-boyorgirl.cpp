#include <bits/stdc++.h>
using namespace std;
int main()
{
    string username, distinct;
    cin >> username;
    unordered_set<char> repeat;
    for (char c : username)
    {
        if (repeat.count(c) == 0)
        {
            repeat.insert(c);
            distinct.push_back(c);
        }
    }
    cout << ((distinct.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
}
