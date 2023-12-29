#include <bits/stdc++.h>
using namespace std;

char determine_winner(string a, string b, string c)
{
    if ((a == "rock" && b == "scissors" && c == "scissors") || (a == "scissors" && b == "paper" && c == "paper") || (a == "paper" && b == "rock" && c == "rock"))
        return 'F';
    else if ((b == "rock" && a == "scissors" && c == "scissors") || (b == "scissors" && a == "paper" && c == "paper") || (b == "paper" && a == "rock" && c == "rock"))
        return 'M';
    else if ((c == "rock" && b == "scissors" && a == "scissors") || (c == "scissors" && b == "paper" && a == "paper") || (c == "paper" && b == "rock" && a == "rock"))
        return 'S';
    else
        return '?';
}

int main()
{
    string fyodor, matroskin, sharic;
    cin >> fyodor >> matroskin >> sharic;
    cout << determine_winner(fyodor, matroskin, sharic);
}