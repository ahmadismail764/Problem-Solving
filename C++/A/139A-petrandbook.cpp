#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int pages;
    vector<int> week;

public:
    void input()
    {
        cin >> pages;
        for (int i = 0; i < 7; i++)
        {
            int x;
            cin >> x;
            week.push_back(x);
        }
    }
    int answer()
    {
        int i = 0;
        while (pages > 0)
        {
            pages -= week[i % 7];
            ++i;
        }
        return ((i % 7) ? (i % 7) : 7);
    }
};

int main()
{
    Solver solution;
    solution.input();
    cout << solution.answer();
}