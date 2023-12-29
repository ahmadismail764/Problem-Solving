#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while (n--)
    {
        bool is_k_good = true;
        string num;
        cin >> num;
        for (char c = '0'; c <= '0' + k; c++)
        {
            if (num.find(c) == string::npos)
            {
                is_k_good = false;
                break;
            }
        }
        (is_k_good) ? ans++ : 0;
    }
    cout << ans;
}
