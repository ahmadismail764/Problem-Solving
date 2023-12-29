#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int result = (k * w * (w + 1) / 2.0) - n;
    (result > 0) ? cout << result : cout << 0;
}