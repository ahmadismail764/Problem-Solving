n, k = map(int, input().split())
print(0 if k >= 3 * n else 3*n - k)
