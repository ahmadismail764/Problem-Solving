#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> speeds(n);
    for (int i = 0; i < n; i++)
        cin >> speeds[i];
    int wordcount = 1;
    for (int i = 1; i < n; i++)
        (speeds[i] - speeds[i - 1] <= c) ? wordcount++ : wordcount = 1;
    cout << wordcount;
}