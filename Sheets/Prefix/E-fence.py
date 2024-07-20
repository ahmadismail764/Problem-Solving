# It turns out!
n, k = map(int, input().split())
arr = list(map(int, input().split()))
prefix = [0] * (n+1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
minimum = float('inf')
answer = 0
for i in range(k, n+1):
    curr_diff = prefix[i] - prefix[i-k] 
    if curr_diff < minimum:
        answer = i - k + 1
        minimum = curr_diff
print(answer)