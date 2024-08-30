def can_place_cows(stalls, n, c, min_dist):
    last_position = stalls[0]
    count = 1
    for i in range(1, n):
        if stalls[i] - last_position >= min_dist:
            count += 1
            last_position = stalls[i]
            if count == c:
                return True
    return False


tt = int(input())
for _ in range(tt):
    n, c = map(int, input().split())
    stalls = list()
    for i in range(n):
        stalls.append(int(input()))
    stalls.sort()
    start, end, ans = 1, max(stalls) - min(stalls), 0
    while start <= end:
        mid = (start + end) // 2
        if can_place_cows(stalls, n, c, mid):
            ans = mid
            start = mid + 1
        else:
            end = mid - 1
    print(ans)
