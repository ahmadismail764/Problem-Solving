#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> distances(3);
    int option1 = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> distances[i];
        option1 += distances[i];
    }
    sort(distances.begin(), distances.end());
    int option2 = 2 * (distances[0] + distances[1]);
    cout << min(option1, option2);
}