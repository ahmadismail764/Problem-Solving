#include <iostream>

int main()
{
    unsigned n;
    std::cin >> n;
    int height = 0, cubes = 0;
    while (cubes <= n)
    {
        height++;
        cubes += height * (height + 1) / 2;
    }
    std::cout << height - 1;
}
