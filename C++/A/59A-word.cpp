#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string uppercase(string word)
{
    for (int i = 0; i < word.size(); i++)
        word[i] = toupper(word[i]);
    return word;
}

string lowercase(string word)
{
    for (int i = 0; i < word.size(); i++)
        word[i] = tolower(word[i]);
    return word;
}

int main()
{
    string s;
    int upcase = 0, lowcase = 0;
    cin >> s;
    if (s.length() <= 100)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
                upcase += 1;
            else if (islower(s[i]))
                lowcase += 1;
        }
        if (upcase > lowcase)
            cout << uppercase(s);
        else if (lowcase > upcase || lowcase == upcase)
            cout << lowercase(s);
    }
}
