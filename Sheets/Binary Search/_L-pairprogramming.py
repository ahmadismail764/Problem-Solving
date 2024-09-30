tt = int(input())
for _ in range(tt):
    k, n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ans = list()
    i = 0
    j = 0
    while i < n or j < m:
        if i < n and a[i] <= k:
            k += not a[i]
            ans.append(a[i])
            i += 1
        elif j < m and b[j] <= k:
            k += not b[j]
            ans.append(b[j])
            j += 1
        else:
            print(-1)
            exit()
    print(*ans)
