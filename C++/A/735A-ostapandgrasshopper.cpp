#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len, n;
    string str;
    cin >> len >> n >> str;
    int hopper = str.find('G'), insect = str.find('T');
    if (hopper > insect)
    {
        for (int i = insect; i < hopper + 1; i += n)
        {
            if (str[i] == '#')
            {
                cout << "NO";
                return 0;
            }
            else if (str[i] == 'G')
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
    else
    {
        for (int i = hopper; i < insect + 1; i += n)
        {
            if (str[i] == '#')
            {
                cout << "NO";
                return 0;
            }
            else if (str[i] == 'T')
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
}