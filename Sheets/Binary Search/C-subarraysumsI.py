n, x = map(int, input().split())
arr = list(map(int, input().split()))
prefix = [0] * (n+1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
if prefix[n] <= x:
    print(int(prefix[n] == x))
else:
    start, end, k_index = 1, n, -1
    while start <= end:
        mid = (start + end) // 2
        if prefix[mid] >= x:
            k_index = mid
            end = mid - 1
        else:
            start = mid + 1
    if k_index == - 1:
        print(0)
    else:
        ans = int(prefix[k_index] == x)
        for i in range(k_index+1, n+1):
            curr = abs(x - prefix[i])
            ans += prefix[:i].count(curr)
        print(ans)
