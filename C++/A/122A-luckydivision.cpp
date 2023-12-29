#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string x = to_string(n);
    bool flag = true;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != '4' && x[i] != '7')
        {
            flag = false;
            break;
        }
    }
    (flag || (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)) ? cout << "YES" : cout << "NO";
}
