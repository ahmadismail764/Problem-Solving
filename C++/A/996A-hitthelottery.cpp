#include <iostream>
using namespace std;
int main()
{
    int amount;
    cin >> amount;
    int denominations[] = {100, 20, 10, 5, 1};
    int num_of_bills[] = {0, 0, 0, 0, 0};
    int remainingAmount = amount;
    int answer = 0;

    for (int i = 0; i < 5; i++)
    {
        num_of_bills[i] = remainingAmount / denominations[i];
        remainingAmount %= denominations[i];
    }
    for (int i = 0; i < 5; i++)
    {
        answer += num_of_bills[i];
    }
    cout << answer;
}
