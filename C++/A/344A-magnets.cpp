#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int groups = 1;
    int prev, curr;
    cin >> prev;
    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        (curr != prev) ? groups++, prev = curr : 0;
    }
    cout << groups;
}
