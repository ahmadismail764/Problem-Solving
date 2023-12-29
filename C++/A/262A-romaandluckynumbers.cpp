#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, answer = 0;
    string number;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        int counter = 0;
        for (char c : number)
            (c == '4' || c == '7') ? counter++ : 0;
        (counter <= k) ? answer++ : 0;
    }
    cout << answer;
}