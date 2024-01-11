#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int n;
    vector<int> before, after;

public:
    void input()
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            before.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            after.push_back(x);
        }
    }
    bool notes_are_correct() { return (accumulate(before.begin(), before.end(), 0) >= accumulate(after.begin(), after.end(), 0)); }
};

int main()
{
    Solver solution;
    solution.input();
    cout << ((solution.notes_are_correct()) ? "Yes" : "No");
}