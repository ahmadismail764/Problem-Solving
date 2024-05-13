tt = int(input())
for _ in range(tt):
    x, y = map(int, input().split())
    print(min(x, y), max(x, y))
