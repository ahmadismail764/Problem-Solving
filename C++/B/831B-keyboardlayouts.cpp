#include <bits/stdc++.h>
using namespace std;

class Solver
{
    string layout1, layout2, text;

public:
    void input() { cin >> layout1 >> layout2 >> text; }
    string answer()
    {
        string new_text;
        for (char c : text)
        {
            if (isalpha(c))
            {
                char new_char = ((isupper(c)) ? toupper(layout2[layout1.find(tolower(c))]) : layout2[layout1.find(c)]);
                new_text.push_back(new_char);
            }
            else
                new_text.push_back(c);
        }
        return new_text;
    }
};

int main()
{
    Solver solution;
    solution.input();
    cout << solution.answer();
}