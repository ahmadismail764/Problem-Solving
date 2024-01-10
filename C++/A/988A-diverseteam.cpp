#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int n, k;
    vector<int> ratings;

public:
    void input()
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ratings.push_back(x);
        }
    }
    void answer()
    {
        set<int> unique;
        for (int i = 0; i < n; i++)
            unique.insert(ratings[i]);
        if (unique.size() < k)
            cout << "NO";
        else
        {
            cout << "YES\n";
            for (auto it = unique.begin(); it != unique.end() && k--; it++)
                cout << distance(ratings.begin(), find(ratings.begin(), ratings.end(), *it)) + 1 << ' ';
        }
    }
};

int main()
{
    Solver solution;
    solution.input();
    solution.answer();
}