#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_set<string> distinctWords;
    for (int i = 0; i < s.length(); i++)
    {
        rotate(s.begin(), s.begin() + 1, s.end());
        distinctWords.insert(s);
    }
    cout << distinctWords.size();
}
