#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string word;
        cin >> n >> word;
        int map_count = 0, pie_count = 0, mapie_count = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            if (word.substr(i, 3) == "map")
                map_count++;
            if (word.substr(i, 3) == "pie")
                pie_count++;
            if (word.substr(i, 5) == "mapie")
                mapie_count++;
        }
        cout << (map_count + pie_count - (word.find("mapie") != string::npos ? mapie_count : 0)) << '\n';
    }
}
