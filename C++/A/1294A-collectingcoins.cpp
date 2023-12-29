#include <iostream>
using namespace std;

bool canDistributeCoins(int a, int b, int c, int n)
{
    int max_coins = (a + b + c + n) / 3;
    return (max_coins >= a && max_coins >= b && max_coins >= c && (a + b + c + n) % 3 == 0);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        cout << ((canDistributeCoins(a, b, c, n)) ? "YES" : "NO") << endl;
    }
}