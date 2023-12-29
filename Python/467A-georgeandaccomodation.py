n = int(input())
available = 0
for _ in range(n):
    already, capacity = map(int, input().split())
    available = available + 1 if capacity - already >= 2 else available
print(available)