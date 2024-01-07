n = int(input())
gifts = list(map(int, input().split()))
givers = [0] * n
for i in range(n):
    givers[gifts[i] - 1] = i + 1
print(*givers, end=" ")
