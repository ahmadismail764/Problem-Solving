#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string ticket;
    cin >> n >> ticket;
    for (char c : ticket)
        if (c != '4' && c != '7')
        {
            cout << "NO";
            return 0;
        }
    int half = n / 2;
    string first_half = ticket.substr(0, half);
    string second_half = ticket.substr(half);
    int first_sum = 0, second_sum = 0;
    for (char c : first_half)
        first_sum += c - '0';
    for (char c : second_half)
        second_sum += c - '0';
    bool flag = first_sum == second_sum;
    cout << ((flag) ? "YES" : "NO");
}