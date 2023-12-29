#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int grav_box[n];
    for (int i = 0; i < n; i++)
        std::cin >> grav_box[i];
    std::sort(grav_box, grav_box + n);
    for (int x : grav_box)
        std::cout << x << " ";
    std::cout << '\n';
}