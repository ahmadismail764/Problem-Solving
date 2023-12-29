#include <bits/stdc++.h>
using namespace std;

const int NO_X = 2e9;

int main()
{
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<string, int>> commandlog;
    priority_queue<int> heap;

    while (n--)
    {
        string command;
        cin >> command;
        if (command == "insert")
        {
            int x;
            cin >> x;
            heap.push(-x);
            commandlog.push_back(make_pair(command, x));
        }
        else if (command == "getMin")
        {
            int x;
            cin >> x;
            while (!heap.empty() && -heap.top() < x)
            {
                heap.pop();
                commandlog.push_back(make_pair("removeMin", NO_X));
            }
            if (heap.empty() || -heap.top() > x)
            {
                heap.push(-x);
                commandlog.push_back(make_pair("insert", x));
            }
            commandlog.push_back(make_pair(command, x));
        }
        else
        {
            if (heap.empty())
                commandlog.push_back(make_pair("insert", 0));
            else
                heap.pop();
            commandlog.push_back(make_pair(command, NO_X));
        }
    }

    cout << commandlog.size() << "\n";
    for (auto &p : commandlog)
    {
        cout << p.first;
        if (p.second != NO_X)
            cout << " " << p.second;
        cout << "\n";
    }
}