#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stringstream interviewText;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o' && i + 2 < n && s[i + 1] == 'g' && s[i + 2] == 'o')
        {
            interviewText << "***";
            i += 2;
            while (i + 1 < n && s[i + 1] == 'g' && s[i + 2] == 'o')
                i += 2;
        }
        else
            interviewText << s[i];
    }

    cout << interviewText.str();
}
