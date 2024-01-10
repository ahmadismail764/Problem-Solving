n, m = map(int, input().split())
cnt = [0] * (m + 2)
ans = []
for _ in range(n):
    left, r = map(int, input().split())
    cnt[left] += 1
    cnt[r + 1] -= 1
for i in range(1, m + 1):
    cnt[i] += cnt[i - 1]
for i in range(1, m + 1):
    if cnt[i] == 0:
        ans.append(i)
print(len(ans))
print(*ans)
