// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> arr(n), answer;
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];
//         int l = *min_element(arr.begin(), arr.end());
//         int r = *max_element(arr.begin(), arr.end());
//         for (int i = l; i <= r; i++)
//         {
//             int cnt = count(arr.begin(), arr.end(), i);
//         }
//         bool found = false;
//         while (l <= r)
//         {
//             bool valid = true;
//             for (int i = l; i <= r; i++)
//             {
//                 int cnt = count(arr.begin(), arr.end(), i);
//                 if (cnt < k)
//                 {
//                     valid = false;
//                     break;
//                 }
//             }
//             if (valid)
//             {
//                 found = true;
//                 cout << l << ' ' << r << '\n';
//                 break;
//             }
//             else
//                 l++;
//         }
//         if (!found)
//             cout << "-1\n";
//     }
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Step 1: Sort and get unique elements
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        int l = 0, r = 0;
        int max_length = -1;
        unordered_map<int, int> freq;

        // Step 2: Sliding window approach
        while (r < arr.size())
        {
            // Expand r to include more elements
            while (r < arr.size() && (freq[arr[r]] < k))
            {
                freq[arr[r]]++;
                r++;
            }

            // Check if current window [l, r-1] is valid
            bool valid = true;
            for (int i = 0; i < arr.size(); i++)
            {
                if (freq[arr[i]] < k)
                {
                    valid = false;
                    break;
                }
            }

            // If valid, update max_length and l
            if (valid)
            {
                if (max_length < arr[r - 1] - arr[l])
                {
                    max_length = arr[r - 1] - arr[l];
                    // Store l and r-1 as answer
                    l = arr[l];
                    r = arr[r - 1];
                }
                // Shrink l to find new valid window
                freq[arr[l]]--;
                l++;
            }
            else
            {
                // If not valid, shrink l
                freq[arr[l]]--;
                l++;
            }
        }

        // Output the result
        if (max_length == -1)
            cout << "-1\n";
        else
            cout << l << " " << r << '\n';
    }
}
