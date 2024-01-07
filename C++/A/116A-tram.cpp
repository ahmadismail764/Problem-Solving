#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr_capacity = 0, max_capacity = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        curr_capacity = curr_capacity - a + b;
        if (curr_capacity > max_capacity)
            max_capacity = curr_capacity;
    }
    cout << max_capacity;
}