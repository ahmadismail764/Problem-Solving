#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        set<int> num_set;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            num_set.insert(nums[i]);
        }
        if (num_set.size() == nums.size())
            cout << "YES\n";
    }
}