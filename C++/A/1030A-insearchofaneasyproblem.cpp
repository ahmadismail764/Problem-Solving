#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int opinions[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
        cin >> opinions[i];
    for (int i : opinions)
    {
        if (i == 1)
        {
            flag = true;
            break;
        }
    }

    cout << ((flag) ? "Hard" : "Easy");
}