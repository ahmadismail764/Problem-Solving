#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int sum = 0, current_pos = 'a';
    for (char c : word)
    {
        int next_pos = c;
        int clockwise = abs(next_pos - current_pos), anticlockwise = 26 - clockwise;
        sum += min(clockwise, anticlockwise);
        current_pos = next_pos;
    }
    cout << sum;
}