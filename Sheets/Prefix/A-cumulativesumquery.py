n = int(input())
arr = list(map(int, input().split()))
prefix = [0] * (n+1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
q = int(input())
for i in range(q):
    l, r = map(int, input().split())
    l += 1
    r += 1
    print(prefix[r] - prefix[l-1])
