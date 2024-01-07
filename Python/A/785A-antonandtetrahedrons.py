n = int(input())
polyhedron_faces = {
    "Tetrahedron": 4,
    "Cube": 6,
    "Octahedron": 8,
    "Dodecahedron": 12,
    "Icosahedron": 20,
}
total_faces = 0
for i in range(n):
    polyhedron = input()
    total_faces += polyhedron_faces[polyhedron]
print(total_faces)
