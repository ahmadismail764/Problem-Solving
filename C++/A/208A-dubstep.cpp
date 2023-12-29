#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inputString;
    cin >> inputString;

    size_t pos = inputString.find("WUB");
    while (pos != string::npos)
    {
        inputString.replace(pos, 3, " ");
        pos = inputString.find("WUB", pos + 1);
    }
    size_t start = inputString.find_first_not_of(" ");
    if (start != string::npos)
        inputString = inputString.substr(start);
    cout << inputString;
}