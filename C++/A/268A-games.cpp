#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int host_uniforms[n];
    int guest_uniforms[n];
    for (int i = 0; i < n; i++)
        cin >> host_uniforms[i] >> guest_uniforms[i];

    int num_games = n * (n - 1);
    int num_switches = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            (i != j && host_uniforms[i] == guest_uniforms[j]) ? num_switches++ : 0;
    cout << num_switches;
}