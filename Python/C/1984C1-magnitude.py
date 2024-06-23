tt = int(input())
for _ in range(tt):
    n = int(input())
    arr = list(map(int, input().split()))
    sum, mn = 0, 0
    for i in range(n):
        sum += arr[i]
        mn = min(mn, sum)
    print(sum-2*mn)
