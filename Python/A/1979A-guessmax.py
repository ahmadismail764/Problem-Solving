tt = int(input())
for _ in range(tt):
    n = int(input())
    arr = list(map(int, input().split()))
    mn = max(arr[0], arr[1])
    for i in range(1, n - 1):
        mn = min(mn, max(arr[i], arr[i+1]))
    print(mn-1)
