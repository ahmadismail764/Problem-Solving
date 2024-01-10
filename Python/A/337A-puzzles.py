n, m = map(int, input().split())
pieces = sorted(list(map(int, input().split())))
min_diff = pieces[n - 1] - pieces[0]
for i in range(1, m - n + 1):
    diff = pieces[i + n - 1] - pieces[i]
    min_diff = diff if diff < min_diff else min_diff
print(min_diff)
