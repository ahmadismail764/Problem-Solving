#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> days(n);
    for (int i = 0; i < n; i++)
        cin >> days[i];
    int maxLength = 1, currentLength = 1;
    for (int i = 1; i < n; i++)
    {
        if (days[i] >= days[i - 1])
            currentLength++;
        else
        {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }
    cout << max(maxLength, currentLength);
}
