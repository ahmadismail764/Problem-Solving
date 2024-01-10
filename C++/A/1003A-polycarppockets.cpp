#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    unordered_map<int, int> countMap;
    for (int num : numbers)
        countMap[num]++;

    int maxCount = countMap[numbers[0]];
    for (const auto &pair : countMap)
        if (pair.second > maxCount)
            maxCount = pair.second;

    cout << maxCount;
}
