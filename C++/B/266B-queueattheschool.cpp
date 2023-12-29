#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string line;
    cin >> n >> t >> line;

    while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (line[i] == 'G' && line[i - 1] == 'B')
            {
                line[i] = 'B';
                line[i - 1] = 'G';
                ++i;
            }
        }
    }
    cout << line << '\n';
}