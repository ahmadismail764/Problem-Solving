#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int n;
    vector<int> numbers;

public:
    void input()
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            numbers.push_back(x);
        }
    }
    pair<int, int> min_diff_indices()
    {
        int min_diff = numeric_limits<int>::max();
        pair<int, int> min_indices = {0, 0};
        for (int i = 1; i < n; ++i)
        {
            int diff = abs(numbers[i] - numbers[i - 1]);
            if (diff < min_diff)
            {
                min_diff = diff;
                min_indices = {i, i + 1};
            }
        }
        int last_diff = abs(numbers[n - 1] - numbers[0]);
        if (last_diff < min_diff)
        {
            min_diff = last_diff;
            min_indices = {1, n};
        }
        return min_indices;
    }
};
int main()
{
    Solver solution;
    solution.input();
    cout << solution.min_diff_indices().first << ' ' << solution.min_diff_indices().second;
}