#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    (k <= (n + 1) / 2) ? cout << (2 * k) - 1 : cout << 2 * (k - (n + 1) / 2);
}
