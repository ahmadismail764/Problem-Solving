A, B = map(int, input().split())
x, y, z = map(int, input().split())
t = max((2 * x + y) - A, 0) + max((3 * z + y) - B, 0)
print(t)
