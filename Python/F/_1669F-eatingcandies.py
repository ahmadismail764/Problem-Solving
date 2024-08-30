tt = int(input())
for _ in range(tt):
    n = int(input())
    arr = list(map(int, input().split()))
    sum = sum(arr)
    if sum(arr) % 2:
        print(0)
    else:
        start, end = 0, n - 1
        alice, bob = 0, 0
        while (start <= end and alice != bob):
            alice += arr[start]
            bob += arr[end]
