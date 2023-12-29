#include <iostream>
using namespace std;

int main()
{
    int m, n;
    1 <= m <= 16;
    1 <= n <= 16;
    m <= n;
    cin >> m >> n;
    cout << (m * n) / 2 << '\n';
}