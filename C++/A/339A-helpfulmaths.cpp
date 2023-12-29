#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string op;
    cin >> op;
    vector<int> numbers;
    stringstream ss(op);
    int number;
    char separator;
    while (ss >> number)
    {
        numbers.push_back(number);
        if (ss.peek() == '+')
            ss >> separator;
    }
    sort(numbers.begin(), numbers.end());
    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
        if (i < numbers.size() - 1)
            cout << "+";
    }
}
