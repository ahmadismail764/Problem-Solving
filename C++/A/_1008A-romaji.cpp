#include <bits/stdc++.h>
using namespace std;

int main()
{
    string vowels = "aeiou", word;
    cin >> word;
    bool flag = true;
    for (int i = 0; i < word.size() - 1; i++)
    {
        if (word[i] == 'n')
            continue;
        if (vowels.find(word[i]) == string::npos && vowels.find(word[i + 1]) == string::npos)
            flag == false;
    }
    cout << ((flag) ? "Yes\n" : "No\n");
}