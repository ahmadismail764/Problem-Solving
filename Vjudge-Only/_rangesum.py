n = int(input())
arr = list(map(int, input().split()))
prefix = [0] * (n+1)
for i in range(1, n + 1):
    prefix[i] = prefix[i - 1] + arr[i - 1]

nq = int(input())
for _ in range(nq):
    q = list(map(int, input().split()))
    if q[0] == 1:
        print(prefix[q[2]] - prefix[q[1] - 1])
    else:
        x = q[1]
        for i in range(1, n + 1):
            prefix[i] += x
        arr.insert(0, x)
        prefix.insert(1, x)
        n += 1
