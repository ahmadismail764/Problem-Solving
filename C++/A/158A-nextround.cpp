#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    int count = 0;
    for (int i = 0; i < n; i++)
        (scores[i] >= scores[k - 1] && scores[i] > 0) ? count++ : 0;
    cout << count;
}