#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int x;
    vector<int> numbers;

public:
    void input()
    {
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            numbers.push_back(a);
        }
    }
    int answer()
    {
        sort(numbers.begin(), numbers.end());
        return numbers[(x - 1) / 2];
    }
};

int main()
{
    Solver solution;
    solution.input();
    int y = solution.answer();
    cout << y;
}