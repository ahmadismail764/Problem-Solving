#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    string mk = "aeiou";
    for (int i = 0; i < word.size(); i++)
    {
        if (mk.find(word[i]) == string::npos && word[i] != 'n')
        {
            if (mk.find(word[i + 1]) == string::npos)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}