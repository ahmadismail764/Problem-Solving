#include <iostream>

int main()
{
    int k, n, s, p;
    std::cin >> k >> n >> s >> p;

    int sheets_per_person = (n + s - 1) / s;
    int sheets = k * sheets_per_person;
    int result = (sheets + p - 1) / p;
    std::cout << result << std::endl;
}