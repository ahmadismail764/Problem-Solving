#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> operations = {(a + b + c), (a + b * c), (a * (b + c)), (a * b * c), ((a + b) * c)};
    cout << (*max_element(operations.begin(), operations.end()));
}