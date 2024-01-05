n = int(input())
curday = 0
arr = [0] * (n + 1)
for i in range(1, n + 1):
    s, d = map(int, input().split())
    day = 0
    j = 0
    while True:
        if s + (j * d) > curday:
            day = s + (j * d)
            break
        j += 1
    if n > 1:
        curday = day
    else:
        arr[i] = s
    arr[i] = day
print(arr[n])
