#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string stages, rocket, new_stages = "";
    cin >> n >> k >> stages;
    sort(stages.begin(), stages.end());
    for (int i = 1; i < stages.size(); i++)
    {
        char curr_char = stages[i], prev_char = stages[i - 1];
        if (curr_char - prev_char >= 2)
            new_stages += curr_char;
    }
    int h = 0;
    while (rocket.size() < k && h < new_stages.size())
    {
        rocket.push_back(new_stages[h]);
        ++h;
    }
    if (rocket.size() < k)
        cout << -1;
    else
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
            sum += rocket[j] - 'a' + 1;
        cout << sum;
    }
}