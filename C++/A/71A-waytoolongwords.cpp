#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i;
    string word;
    1 <= word.size() <= 100;
    1 <= n <= 100;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        getline(cin, word);
        (word.size() > 10) ? cout << word[0] + to_string(word.size() - 2) + word[word.size() - 1] << '\n' : cout << word << '\n';
    }
}