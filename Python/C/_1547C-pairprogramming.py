tt = int(input())
for _ in range(tt):
    k, n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ans = []
    i, j = 0, 0
    ok = True
    while (i < n or j < m):
        if (i < n and a[i] == 0):
            ans.append(0)
            k += 1
            i += 1
        elif (j < m and b[j] == 0):
            ans.append(0)
            k += 1
            j += 1
        elif (i < n and a[i] <= k):
            ans.append(a[i])
            i += 1
        elif (j < m and b[j] <= k):
            ans.append(b[j])
            j += 1
        else:
            ok = False
            print(-1)
            break
    if ok:
        print(*ans)
