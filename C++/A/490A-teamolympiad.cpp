#include <bits/stdc++.h>
using namespace std;
int prog[5001], math[5001], sport[5001];

int main()
{
    int n = 12, w;
    cin >> n;
    int a1 = 0, a2 = 0, a3 = 0;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            prog[a1] = i;
            a1++;
        }
        else if (num == 2)
        {
            math[a2] = i;
            a2++;
        }
        else
        {
            sport[a3] = i;
            a3++;
        }
    }

    w = min(a1, min(a2, a3));
    cout << w << '\n';

    for (int i = 0; i < w; i++)
        cout << prog[i] << " " << math[i] << " " << sport[i] << '\n';
}