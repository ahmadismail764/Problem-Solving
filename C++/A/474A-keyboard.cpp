#include <bits/stdc++.h>
using namespace std;

int main()
{
    char direction;
    string sequence;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    cin >> direction;
    cin >> sequence;

    for (int i = 0; i < sequence.size(); i++)
    {
        char c = sequence[i];
        int index = keyboard.find(c);
        cout << ((direction == 'L') ? keyboard[(index + 1) % keyboard.size()] : keyboard[(index - 1) % keyboard.size()]);
    }
}