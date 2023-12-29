#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    priority_queue<long long> potions;
    long long health = 0;
    long long count = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        health += a;
        potions.push(-a);
        count++;

        while (health < 0)
        {
            health += potions.top();
            potions.pop();
            count--;
        }
    }
    cout << count << endl;
}