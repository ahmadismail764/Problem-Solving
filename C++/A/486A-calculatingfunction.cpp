#include <iostream>
using namespace std;

long long sum_of_sequence(long long n)
{
    long long even_sum = (n / 2) * (n / 2 + 1);
    long long odd_sum = ((n + 1) / 2) * ((n + 1) / 2);
    return even_sum - odd_sum;
}

int main()
{
    long long n;
    cin >> n;
    cout << sum_of_sequence(n);
}