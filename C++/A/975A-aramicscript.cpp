#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string new_word;
    set<string> words;
    while (n--)
    {
        cin >> new_word;
        if (new_word.size() == 1)
            words.insert(new_word);
        else
        {
            sort(new_word.begin(), new_word.end());
            set<char> seen;
            string result = "";
            for (char c : new_word)
                if (seen.insert(c).second)
                    result += c;
            words.insert(result);
        }
    }
    cout << words.size();
}