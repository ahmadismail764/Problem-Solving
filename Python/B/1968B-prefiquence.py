t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = [''] + list(input())
    b = [''] + list(input())
    dp = [0] * (m + 1)
    dp[1] = (a[1] == b[1])
    for i in range(2, m + 1):
        dp[i] = dp[i - 1] + (dp[i - 1] != n and b[i] == a[dp[i - 1] + 1])
    print(int(dp[m]))
