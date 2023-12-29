#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    stack<char> wires;
    for (char c : str)
        (!wires.empty() && wires.top() == c) ? wires.pop() : wires.push(c);
    cout << (wires.empty() ? "YES" : "NO");
}