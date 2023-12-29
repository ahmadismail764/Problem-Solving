#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxIndex = 0, minIndex = n - 1;
    for (int i = 0; i < n; i++)
    {
        (arr[i] > arr[maxIndex]) ? maxIndex = i : 0;
        (arr[i] <= arr[minIndex]) ? minIndex = i : 0;
    }

    int swaps = maxIndex + (n - 1 - minIndex);
    (minIndex < maxIndex) ? swaps-- : 0;
    cout << swaps;
}
