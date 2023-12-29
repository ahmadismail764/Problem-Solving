#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string binary = bitset<32>(n).to_string();
    cout << count(binary.begin(), binary.end(), '1');
}
