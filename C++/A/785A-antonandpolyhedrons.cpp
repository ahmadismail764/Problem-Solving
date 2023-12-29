#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> polyhedron_faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    int total_faces = 0;
    for (int i = 0; i < n; i++)
    {
        string polyhedron;
        cin >> polyhedron;
        total_faces += polyhedron_faces[polyhedron];
    }
    cout << total_faces;
}