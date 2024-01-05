#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int x;
    set<int> scores;

public:
    void input()
    {
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
                scores.insert(a);
        }
    }
    int answer() { return scores.size(); }
};

int main()
{
    Solver solution;
    solution.input();
    cout << solution.answer();
}