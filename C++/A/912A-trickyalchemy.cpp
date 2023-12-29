#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int A, B;
    ll x, y, z;
    cin >> A >> B;
    cin >> x >> y >> z;
    ll t = max((2 * x + y) - A, 0LL) + max((3 * z + y) - B, 0LL);
    cout << t;
}
