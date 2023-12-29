#include <iostream>
using namespace std;

int main()
{
    unsigned a, b, years = 0;
    1 <= a <= b <= 10;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years;
}