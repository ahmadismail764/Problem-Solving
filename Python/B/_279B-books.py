n, t = map(int, input().split())
books = list(map(int, input().split()))
prefix = [0] * (n + 1)
for i in range(1, n + 1):
    prefix[i] = prefix[i - 1] + books[i - 1]
start, end = 1, n
time = prefix[end] - prefix[start - 1]
while start <= end:
    time = prefix[end] - prefix[start - 1]
    if time < t:
        print(end - start + 1)
        exit()
    elif time == t:
        print(end - start + 1)
        exit()
    else:
        start += 1
print(0)
