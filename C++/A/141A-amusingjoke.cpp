#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    string guest_name, host_name, pile_letters;
    cin >> guest_name >> host_name >> pile_letters;

    unordered_map<char, int> char_counts;
    for (char c : guest_name)
        char_counts[c]++;

    for (char c : host_name)
        char_counts[c]++;

    for (char c : pile_letters)
    {
        if (char_counts[c] > 0)
            char_counts[c]--;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (auto p : char_counts)
    {
        if (p.second > 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES";
}