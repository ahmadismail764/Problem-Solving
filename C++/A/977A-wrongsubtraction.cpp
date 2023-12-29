#include <iostream>

int main()
{
    unsigned n, k;
    2 <= n <= 1000000000;
    1 <= k <= 50;
    std::cin >> n >> k;
    for (int i = 0; i < k; i++)
        (n % 10 == 0) ? n /= 10 : n--;
    std::cout << n;
}