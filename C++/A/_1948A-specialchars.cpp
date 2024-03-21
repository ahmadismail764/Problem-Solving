#include <bits/stdc++.h>
using namespace std;

int main()
{
    const string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            string answer = "";
            if (n % 2)
            {
                for (int i = 0; i < 26 && answer.size() < n; i++)
                {
                    answer.push_back(alpha[i]);
                    answer.push_back(alpha[i]);
                    answer.push_back(alpha[i]);
                }
            }
            else
            {
                for (int i = 0; i < 26 && answer.size() < n; i++)
                {
                    answer.push_back(alpha[i]);
                    answer.push_back(alpha[i]);
                }
            }
            cout << answer << '\n';
        }
    }
}