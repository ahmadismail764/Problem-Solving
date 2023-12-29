n, p1, p2, p3, t1, t2 = map(int, input().split())
times = []
start, end = map(int, input().split())
total = (end - start) * p1
temp = end
for i in range(0, n - 1):
    start, end = map(int, input().split())
    interval = start - temp
    if interval <= t1:
        total += interval * p1
    elif (interval > t1 and interval <= t1 + t2):
        total += (t1 * p1) + ((interval - t1) * p2)
    elif (interval > (t1 + t2)):
        total += (t1 * p1) + (t2 * p2) + ((interval - (t1 + t2)) * p3)
    total += (end - start) * p1
    temp = end
print(total)
