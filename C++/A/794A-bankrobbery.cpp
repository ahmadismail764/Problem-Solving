#include <bits/stdc++.h>
using namespace std;

class Solver
{
    int a, b, c, no_safes;
    int answer = 0;

public:
    void the_whole_thing()
    {
        cin >> a >> b >> c >> no_safes;
        for (int i = 0; i < no_safes; i++)
        {
            int x;
            cin >> x;
            answer += (x > b && x < c);
        }
        cout << answer;
    }
};

int main()
{
    Solver solution;
    solution.the_whole_thing();
}