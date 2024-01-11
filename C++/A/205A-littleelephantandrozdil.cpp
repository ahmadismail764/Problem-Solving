#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cities(n);
    for (int i = 0; i < n; i++)
        cin >> cities[i];
    int answer = *min_element(cities.begin(), cities.end());
    if (count(cities.begin(), cities.end(), answer) > 1)
        cout << "Still Rozdil";
    else
        cout << distance(cities.begin(), find(cities.begin(), cities.end(), answer)) + 1;
}