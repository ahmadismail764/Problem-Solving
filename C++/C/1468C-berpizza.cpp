#include <bits/stdc++.h>
using namespace std;

int main()
{
    const long N = 1e9;

    set<long> unserved_customers;
    set<pair<long, long>> customers_by_money; // (money, customer_id)
    map<long, long> customer_money;           // customer_id -> money

    long q;
    cin >> q;

    long next_customer_id = 1;

    while (q--)
    {
        long type, money;
        cin >> type;

        if (type == 1)
        {
            cin >> money;
            long customer_id = next_customer_id++;

            unserved_customers.insert(customer_id);
            customers_by_money.insert({money, N - customer_id});
            customer_money[customer_id] = money;
        }
        else if (type == 2)
        {
            long customer_id = *unserved_customers.begin();
            cout << customer_id << " ";

            unserved_customers.erase(customer_id);
            customers_by_money.erase({customer_money[customer_id], N - customer_id});
            customer_money.erase(customer_id);
        }
        else
        {
            pair<long, long> customer = *customers_by_money.rbegin();
            long customer_id = N - customer.second;

            cout << customer_id << " ";

            unserved_customers.erase(customer_id);
            customers_by_money.erase(customer);
            customer_money.erase(customer_id);
        }
    }
    cout << '\n';
}
