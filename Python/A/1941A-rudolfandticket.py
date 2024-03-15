t = int(input())
for _ in range(t):
    n, m, k = map(int, input().split())
    left = list(map(int, input().split()))
    right = list(map(int, input().split()))
    sum = 0
    for i in range(n):
        for j in range(m):
            sum += left[i] + right[j] <= k
    print(sum)
