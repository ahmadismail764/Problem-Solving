tt = int(input())
for _ in range(tt):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    diff = 0
    ans = 0
    for i in range(1, n+1):
        if a[i-diff-1] > b[i-1]:
            ans += 1
            diff += 1
    print(ans)
