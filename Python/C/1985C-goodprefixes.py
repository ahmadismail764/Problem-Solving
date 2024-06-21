t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    sum_val = mx = ans = 0
    for i in range(n):
        sum_val += a[i]
        mx = max(mx, a[i])
        if sum_val - mx == mx:
            ans += 1
    print(ans)
