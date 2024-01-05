n = int(input())
count = 0
for _ in range(n):
    views = list(map(int, input().split()))

    if sum(views) >= 2:
        count += 1

print(count)
