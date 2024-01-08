#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int n;
    set<int> values;

public:
    void input()
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            values.insert(x);
        }
    }
    string answer() { return ((values.size() != 1) ? to_string(*(++values.begin())) : "NO"); }
};

int main()
{
    Solver solution;
    solution.input();
    cout << solution.answer();
}