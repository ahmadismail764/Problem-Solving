#include <iostream>

int main()
{
    int i = 1, n, solvable = 0, agreement = 0;
    1 <= n <= 1000;
    int problems[3] = {};
    std::cin >> n;
    while (i <= n)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cin >> problems[i];
            (problems[i]) ? agreement += 1 : 0;
        }
        (agreement > 1) ? solvable += 1 : 0;
        agreement = 0;
        i++;
    }
    std::cout << solvable;
}
