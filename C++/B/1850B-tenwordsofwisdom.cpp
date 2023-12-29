#include <bits/stdc++.h>
using namespace std;
// Structure to represent a response
struct Response
{
    int words;
    int quality;
    int index;
};

// Comparator function to compare responses by quality
bool compare_responses(Response r1, Response r2)
{
    return r1.quality > r2.quality;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // Vector to store all the responses
        vector<Response> responses(n);

        // Read in all the responses and store them in the vector
        for (int i = 0; i < n; i++)
        {
            cin >> responses[i].words >> responses[i].quality;
            responses[i].index = i + 1;
        }

        // Sort the responses by quality
        sort(responses.begin(), responses.end(), compare_responses);

        // Find the winner
        for (int i = 0; i < n; i++)
        {
            if (responses[i].words <= 10)
            {
                cout << responses[i].index << '\n';
                break;
            }
        }
    }
}