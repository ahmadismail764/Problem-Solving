#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputStr;
    cin >> inputStr;
    int currentLength = 0, maxLength = 0;
    for (char ch : inputStr)
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
            currentLength = 0;
        else
        {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        }
    }
    cout << maxLength + 1 << '\n';
}
