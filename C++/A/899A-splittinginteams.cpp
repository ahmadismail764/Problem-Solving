#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int no_teams;
    vector<int> teams;

public:
    void input()
    {
        cin >> no_teams;
        for (int i = 0; i < no_teams; i++)
        {
            int a;
            cin >> a;
            teams.push_back(a);
        }
    }
    int answer()
    {
        int cnt1 = count(teams.begin(), teams.end(), 1), cnt2 = count(teams.begin(), teams.end(), 2);
        return ((cnt1 > cnt2) ? cnt2 + (cnt1 - cnt2) / 3 : cnt1);
    }
};

int main()
{
    Solver solution;
    solution.input();
    cout << solution.answer();
}