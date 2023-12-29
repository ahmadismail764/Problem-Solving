#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string feeling = "I hate ";

    for (int i = 2; i <= n; i++)
        (i % 2 == 0) ? feeling += "that I love " : feeling += "that I hate ";
    feeling += "it";
    cout << feeling;
}