#include <bits/stdc++.h>
using namespace std;

string isTriangular(int Tn)
{
    for (int n = 1; n <= Tn; n++)
    {
        if (n * (n + 1) / 2 == Tn)
            return "YES";
    }
    return "NO";
}

int main()
{
    int n;
    cin >> n;
    cout << isTriangular(n);
}