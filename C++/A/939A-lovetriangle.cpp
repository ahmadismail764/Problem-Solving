#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int no_planes;
    vector<int> planes;

public:
    void input()
    {
        cin >> no_planes;
        for (int i = 0; i < no_planes; i++)
        {
            int x;
            cin >> x;
            planes.push_back(x);
        }
    }
    bool love_triangle()
    {
        if (planes.empty())
            return false;
        for (int i = 0; i < no_planes; i++)
        {
            if (planes[planes[planes[i] - 1] - 1] == i + 1)
                return true;
        }
        return false;
    }
};

int main()
{
    Solver solution;
    solution.input();
    cout << ((solution.love_triangle()) ? "YES\n" : "NO\n");
}