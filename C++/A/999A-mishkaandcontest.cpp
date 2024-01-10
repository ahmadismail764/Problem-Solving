#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int n, k;
    deque<int> problems;

public:
    void input()
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            problems.push_back(x);
        }
    }
    int answer()
    {
        int solvable = 0;
        for (int i = 0; i < n; i++)
        {
            if (problems[i] > k)
                break;
            ++solvable;
        }
        for (int i = 0; i < n; i++)
        {
            if (problems[n - 1 - i] > k)
                break;
            ++solvable;
        }
        return min(n, solvable);
    }
};

int main()
{
    Solver solution;
    solution.input();
    cout << solution.answer();
}