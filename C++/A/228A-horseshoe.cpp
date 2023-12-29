#include <iostream>
#include <set>
using namespace std;

int main()
{
    int shoe1, shoe2, shoe3, shoe4;
    cin >> shoe1 >> shoe2 >> shoe3 >> shoe4;
    set<int> shoes = {shoe1, shoe2, shoe3, shoe4};
    cout << 4 - shoes.size();
}