n, m, k = map(int, input().split())

r = (k - 1) // (2 * m) + 1
d = ((k - 1) // 2) % m + 1
s = 'L' if (k - 1) % 2 == 0 else 'R'

print(r, d, s)
