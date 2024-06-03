tt = int(input())
for _ in range(tt):
    a, b, c = map(int, input().split())
    d = (3 - b) % 3
    print(a + (b + d) // 3 + (c-d+2) // 3 if d <= c else -1)
