#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    unordered_set<char> letters;
    for (char c : input)
    {
        if (c == '{' || c == '}' || c == ' ' || c == ',')
            continue;
        letters.insert(c);
    }
    cout << letters.size();
}
