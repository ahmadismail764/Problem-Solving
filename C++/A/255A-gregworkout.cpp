#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> bodyparts(3);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        bodyparts[i % 3] += x;
    }
    int maxElement = *max_element(bodyparts.begin(), bodyparts.end());
    int y = find(bodyparts.begin(), bodyparts.end(), maxElement) - bodyparts.begin();
    if (y == 0)
        cout << "chest";
    else if (y == 1)
        cout << "biceps";
    else
        cout << "back";
}