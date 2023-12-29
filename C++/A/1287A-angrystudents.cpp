#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        string student_states;
        cin >> student_states;
        unsigned i = 0, minutes = 0;
        while (i < s && student_states.find('P') != string::npos)
        {
            bool changed = false;
            unsigned j = 0;
            while (j < s - 1)
            {
                if (student_states[j] == 'A' && student_states[j + 1] == 'P')
                {
                    student_states[j + 1] = 'A';
                    changed = true;
                    j += 2;
                }
                else
                    j++;
            }
            if (!changed)
                break;
            i++;
            minutes++;
        }
        cout << minutes << '\n';
    }
}