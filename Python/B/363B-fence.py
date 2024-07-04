n, k = map(int, input().split())
arr = list(map(int, input().split()))
prefix = [0] * (n + 1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
min_index = 1
min_diff = float('inf')
for i in range(k, n+1):
    curr = prefix[i] - prefix[i - k]
    if curr < min_diff:
        min_diff = curr
        min_index = i - k + 1
print(min_index)
