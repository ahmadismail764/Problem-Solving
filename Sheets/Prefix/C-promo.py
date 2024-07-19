n, q = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()
prefix = [0] * (n+1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
for i in range(q):
    x, y = map(int, input().split())
    print(prefix[n-x+y] - prefix[n-x])
