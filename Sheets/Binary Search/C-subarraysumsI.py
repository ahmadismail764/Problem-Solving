n, x = map(int, input().split())
arr = list(map(int, input().split()))
prefix_count = {}
curr_sum = 0
prefix_count[0] = 1
for a in arr:
    curr_sum += a
    prefix_count[curr_sum] = prefix_count.get(curr_sum, 0) + 1
ans = 0
for key, value in prefix_count.items():
    if key >= x:
        ans += prefix_count.get(key-x, 0)
print(ans)
