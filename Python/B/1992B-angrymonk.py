tt = int(input())
for _ in range(tt):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    print(sum((arr[i]*2-1) for i in range(k-1)))
