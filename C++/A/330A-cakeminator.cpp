#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, answer;
    cin >> r >> c;
    vector<string> cakecells(r);
    for (int i = 0; i < r; i++)
        cin >> cakecells[i];
    int rowstoeat = 0, columnstoeat = 0;
    for (string item : cakecells)
        (item.find('S') == string::npos) ? rowstoeat++ : 0;
    for (int j = 0; j < c; j++)
    {
        bool eatable = true;
        for (int i = 0; i < r; i++)
            if (cakecells[i][j] == 'S')
            {
                eatable = false;
                break;
            }
        columnstoeat += ((eatable) ? 1 : 0);
    }
    cout << (rowstoeat * c) + (columnstoeat * (r - rowstoeat));
}