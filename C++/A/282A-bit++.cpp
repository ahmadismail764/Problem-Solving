#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    string s;
    while (n--)
    {
        std::cin >> s;
        (s[1] == '+') ? ++x : --x;
    }
    cout << x;
}