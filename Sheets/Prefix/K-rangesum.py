n = int(input())
arr = list(map(int, input().split()))
prefix = [0] * (n+1)
for i in range(1, n+1):
    prefix[i] = prefix[i-1] + arr[i-1]
q = int(input())
for _ in range(q):
    query = list(map(int, input().split()))
    if query[0] == 1:
        left, right = query[1], query[2]
        print(prefix[right] - prefix[left-1])
    else:
        x = query[1]
        arr.insert(0, x)
        prefix.insert(1, x)
        for i in range(2, len(prefix)):
            prefix[i] += x
