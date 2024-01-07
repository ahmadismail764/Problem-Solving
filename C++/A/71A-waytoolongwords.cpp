#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i;
    string word;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        getline(cin, word);
        (word.size() > 10) ? cout << word[0] + to_string(word.size() - 2) + word[word.size() - 1] << '\n' : cout << word << '\n';
    }
}