n, t = map(int, input().split())
arr = list(map(int, input().split()))
prefix = [0] * (n+1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
start, end, ans = 1, n, -1
while start <= end:
    mid = (start + end) // 2
    found = False
    for i in range(mid, n+1):
        if prefix[i] - prefix[i-mid] <= t:
            found = True
            ans = max(ans, mid)
            start = mid + 1
            break
    if not found:
        end = mid - 1
print(max(ans, 0))
