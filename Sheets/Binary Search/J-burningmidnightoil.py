def can_write(v, n, k):
    total_written = 0
    current = v
    while current > 0:
        total_written += current
        current //= k
        if total_written >= n:
            return True
    return total_written >= n


n, k = map(int, input().split())
start, end, ans = 1, n, 0
while start <= end:
    mid = (start + end) // 2
    if can_write(mid, n, k):
        ans = mid
        end = mid - 1
    else:
        start = mid + 1
print(ans)
