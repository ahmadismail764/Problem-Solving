#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long num_rows = ceil((double)n / a);
    long long num_cols = ceil((double)m / a);
    long long num_flagstones = num_rows * num_cols;

    cout << num_flagstones << endl;

    return 0;
}
