#include <bits/stdc++.h>
using namespace std;
int calculate_days_off(int n, int start_day)
{
    int days_off = 0, current_day = start_day;
    while (n--)
    {
        (current_day == 6 || current_day == 7) ? days_off++ : 0;
        current_day = (current_day % 7) + 1;
    }
    return days_off;
}

int main()
{
    int n;
    cin >> n;
    cout << calculate_days_off(n, 1) << " " << calculate_days_off(n, 6);
}
