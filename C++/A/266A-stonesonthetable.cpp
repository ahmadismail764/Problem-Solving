#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n, moves = 0;
    n <= 50;
    cin >> n;
    string colors;
    cin >> colors;
    bool done = false;
    while (!done)
    {
        done = true;
        for (int i = 0; i < colors.size() - 1; i++)
        {
            if (colors[i] == colors[i + 1])
            {
                colors.erase(colors.begin() + i, colors.begin() + i + 1);
                moves += 1;
                done = false;
            }
        }
    }
    cout << moves;
}