#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << (x / 5) + min(x % 5, 1);
}