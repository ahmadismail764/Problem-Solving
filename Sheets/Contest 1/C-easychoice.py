n = int(input())
prices = list(map(int, input().split()))
prices.sort()
q = int(input())
for _ in range(q):
    today = int(input())
    start, end = 0, n - 1
    while start <= end:
        mid = (start + end) // 2
        if prices[mid] <= today:
            start = mid + 1
        else:
            end = mid - 1
    print(start)
