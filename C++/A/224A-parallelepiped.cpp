#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << 4 * (sqrt((A * B) / C) + sqrt((B * C) / A) + sqrt((A * C) / B));
}
