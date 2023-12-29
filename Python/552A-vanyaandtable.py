n = int(input())
result = 0
for _ in range(n):
    a, b, c, d = map(int, input().split())
    result += ((c - a + 1) * (d - b + 1))
print(result)
