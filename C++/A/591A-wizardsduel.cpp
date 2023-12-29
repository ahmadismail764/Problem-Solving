#include <iostream>

int main()
{
    int l, p, q;
    double result;
    1 <= l <= 1000;
    1 <= p, q <= 500;
    std::cin >> l >> p >> q;
    result = p * ((double)l / (p + q));
    std::cout << result;
}