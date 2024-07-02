n, q = map(int, input().split())
prices = list(map(int, input().split()))
prices.sort()
prefix_sum = [0] * (n + 1)
for i in range(1, n + 1):
    prefix_sum[i] = prefix_sum[i - 1] + prices[i - 1]
for _ in range(q):
    x, y = map(int, input().split())
    print(prefix_sum[n-x+y] - prefix_sum[n-x])
