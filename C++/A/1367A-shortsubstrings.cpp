#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string b, a = "";
        cin >> b;

        for (int i = 0; i < b.length(); i += 2)
            a += b[i];

        a += b[b.length() - 1];

        cout << a << endl;
    }
}
