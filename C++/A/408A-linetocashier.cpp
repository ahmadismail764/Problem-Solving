#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < arr[i]; j++)
        {
            int x;
            cin >> x;
            cnt += x * 5 + 15;
        }
        arr[i] = cnt;
        cnt = 0;
    }
    sort(arr, arr + n);
    cout << arr[0];
}
