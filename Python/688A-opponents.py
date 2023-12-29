n, d = map(int, input().split())
ans = 0
cur = 0
for i in range(d):
    x = input()
    if '0' not in x:
        cur = 0
    else:
        cur += 1
    ans = max(ans, cur)
print(ans)
