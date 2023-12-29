#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    pair<string, string> first_two;
    cin >> first_two.first >> first_two.second;
    cin >> n;
    vector<pair<string, string>> victims;
    victims.push_back(first_two);

    pair<string, string> current = first_two;
    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        if (current.first == x)
        {
            current.first = y;
            victims.push_back(current);
        }
        else if (current.second == x)
        {
            current.second = y;
            victims.push_back(current);
        }
    }
    for (int i = 0; i < n + 1; i++)
        cout << victims[i].first << ' ' << victims[i].second << '\n';
}