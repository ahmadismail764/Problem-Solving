import math
tt = int(input())
for _ in range(tt):
    n = int(input())
    arr = list(map(int, input().split()))
    print(max(arr[:n-1]) + arr[n-1])
