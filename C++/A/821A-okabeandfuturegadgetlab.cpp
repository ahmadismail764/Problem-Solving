#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int dimension;
    vector<vector<int>> lab;

public:
    void input()
    {
        cin >> dimension;
        for (int i = 0; i < dimension; ++i)
        {
            vector<int> row;
            for (int j = 0; j < dimension; j++)
            {
                int x;
                cin >> x;
                row.push_back(x);
            }
            lab.push_back(row);
        }
    }
    bool lab_validator()
    {
        for (int i = 0; i < dimension; i++)
        {
            for (int j = 0; j < dimension; j++)
            {
                if (lab[i][j] == 1)
                    continue;
                bool pass = false;
                for (int r = 0; r < dimension; r++)
                {
                    if (r == i)
                        continue;
                    for (int c = 0; c < dimension; c++)
                    {
                        if (c == j)
                            continue;
                        int sum = lab[r][j] + lab[i][c];
                        if (sum == lab[i][j])
                        {
                            pass = true;
                            break;
                        }
                    }
                }
                if (!pass)
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    Solver solution;
    solution.input();
    cout << ((solution.lab_validator()) ? "Yes" : "No");
}