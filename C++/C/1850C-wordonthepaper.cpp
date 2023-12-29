#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> words;
    while (t--)
    {
        string word = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char x;
                cin >> x;
                if (x != '.')
                    word += x;
            }
        }
        words.push_back(word);
    }
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << '\n';
    }
}