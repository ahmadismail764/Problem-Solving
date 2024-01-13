#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> stewards(n);
    for (int i = 0; i < n; ++i)
        cin >> stewards[i];
    int minS = *min_element(stewards.begin(), stewards.end()), maxS = *max_element(stewards.begin(), stewards.end());
    int result = count_if(stewards.begin(), stewards.end(),
                          [minS, maxS](int i)
                          { return minS < i && i < maxS; });

    cout << result;
}
