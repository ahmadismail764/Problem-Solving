#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int curday = 0;
    int arr[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        int s, d;
        cin >> s >> d;

        int day = 0;
        int j = 0;
        while (true)
        {
            if ((s + (j * d)) > curday)
            {
                day = (s + (j * d));
                break;
            }
            ++j;
        }
        if (n > 1)
            curday = day;
        else
            arr[i] = s;

        arr[i] = day;
    }

    cout << arr[n];
}
