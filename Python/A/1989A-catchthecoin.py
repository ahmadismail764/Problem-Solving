n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    print("YES" if y >= -1 else "NO")
