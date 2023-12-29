#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> roundNumbers;
        int power10 = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
                roundNumbers.push_back(digit * power10);
            n /= 10;
            power10 *= 10;
        }
        cout << roundNumbers.size() << endl;

        for (int num : roundNumbers)
            cout << num << " ";
        cout << endl;
    }
}