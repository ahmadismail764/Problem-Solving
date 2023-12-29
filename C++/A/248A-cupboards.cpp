#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, l;
    cin >> n;
    vector<int> right, left;
    while (n--)
    {
        cin >> r >> l;
        right.push_back(r);
        left.push_back(l);
    }
    int rightopen = count(right.begin(), right.end(), 1);
    int rightclosed = count(right.begin(), right.end(), 0);
    int leftopen = count(left.begin(), left.end(), 1);
    int leftclosed = count(left.begin(), left.end(), 0);
    cout << min(rightopen, rightclosed) + min(leftopen, leftclosed);
}
