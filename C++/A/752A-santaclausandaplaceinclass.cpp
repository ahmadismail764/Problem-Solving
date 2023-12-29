#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int r = (k - 1) / (2 * m) + 1;
    int d = ((k - 1) / 2) % m + 1;
    char s = (k - 1) % 2 == 0 ? 'L' : 'R';

    cout << r << " " << d << " " << s;
}