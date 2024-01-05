n, k = map(int, input().split())
y = list(map(int, input().split()))

y.sort()

teams = 0
i = n - 1
while i >= 2:
    if y[i] + k <= 5 and y[i - 1] + k <= 5 and y[i - 2] + k <= 5:
        teams += 1
        i -= 3
    else:
        i -= 1

print(teams)
